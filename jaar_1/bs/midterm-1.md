# Besturingssystemen [MIDTERM 1]
`24 april, 2025`

## LECTURE 01: Introduction

### Operating System (OS)
An operating system is the lowest layer of software that a computer contains. It is the layer between application software and hardware and it provides common ways for software application to interact with hardware by creating abstractions that make it easier for developers to interact with. The main goals of an operating system are to optimize performance and to enhance user experience. The operating system has multiple important jobs, as it must handle errors when they occur, and it must allocate resoruces to programs. This means that it is both a **resource allocator** (it decides which program gets which resources and when) and a **control program** (it decides when certain programs can run and what parts of hardware they may interact with). The operating system consists of the kernel, system applications and middleware. 

#### Kernel
The **kernel** is the most important piece of software that runs on the computer. It is the one program that is always running as it keeps the entire computer running. The kernel manages the flow of programs and how they can interact with hardware components. The kernel is in charge of multiple parts of the computer, such as: CPU, memory, disks, I/O devices, processes and system calls. The kernel has multiple tasks:
- Task management: decide what programs may execute and handles things like multitasking and **context switching** (the CPU switches from one process to another. To do this it must 1) save the state of the current program and 2) load the state of the new program). The **context** consists of 1) CPU registers 2) process state 3) memory related information 4) I/O state.
- Memory management: controls the way in which programs can interact with memory by assigning them a virtual memory space within the main memory.
- Device management: communicates with hardware via device drivers (software) that create a uniform interface for all I/O operations.
- File system management: handles file permissions and controls
- System calls interface: provides a way for application programs to request services from the kernel.

**System programs** are important programs which are not inherently needed to keep a computer running, but are integral to it's performance. Such programs are for example network programs, task managers, etc.

**Application programs** are user-made software programs which are not inherently needed to keep a computer running. Examples include, browsers, games, etc.

**Middleware** tertiary software which is not _needed_ for a computer to run, but provides additional functionality which can make a computer more useful, such as databases, graphics, etc.

#### Device controllers
Device controllers are physical pieces of hardware that act as an intermediary between the CPU and a device. It creates a simplified interface for other devices or drivers to interact with. It receives/reads commands, manages device functions, creates and manages data buffers (to provide a smooth data transfer process by stroing the to-be-transferred data in a temporary file storage on the device) and it signals completion to the CPU after completing a task. Device controllers receive their instructions from device drivers, which are software programs created specifically for devices and they send their instructions via their registers.

### Interrupts
An interrupt is a signal that gets sent to the CPU saying that it should temporarily halt execution, so the CPU can respond to an event (I/O, an error, etc.). There are two types of interrupts: hardware- and software-generated interrupts.
- **hardware-generated interrupts** are used to signal something to the kernel/CPU.
- **software-generated interrupts** are either called **traps** or **exceptions** and are produced by user requests or errors. **System calls** are an important example of software-generated interrupts. System calls are requests from a user to the kernel, like `fork()`, `read()` or `write()`.

Without interrupts, CPU's would constantly have to **poll** (status check) if processes are done, which is inefficient. Now it can just wait to receive a signal, which says that a certain process has been finished. This is called a **vectored interrupt system** and is very common on larger systems, because it greatly reduces overhead and increases efficiency.

#### Interrupt handling
1. Interrupt occurs
2. CPU pauses
3. CPU saves current context
4. CPU runs **ISR (interrupt Service Routine)**
5. ISR runs and handles the interrupt
6. CPU restores the saved context and resumes execution

**Interrupt service routine** is a short function that handles an interrupt (in an efficient manner to not make the CPU wait too long).

**Interrupt vector** a fixed location in storage which contains each action for all possible interrupts.

**Interrupt description table** contains a description for what each interrupt means.


### Storage structure
- A **Kilobyte** is 1024 bytes.

- **Caching** is a technique where you store data you expect to use frequently closer to (or on) the CPU to enhance the speed at which it can be accessed, thus increasing efficiency.

- **Device driver** software that controls the interactions between devices and the CPU by providing a uniform interface between controllers and the kernel.

#### Main memory
**Main memory (RAM)** is large storage for media which the CPU can access directly. It is typically **volatile** (it loses its data after turning off the device). This may seem weird, but RAM is designed for speed, not for permanent storage. Permanent storage can be found in lower levels of the memory hierarchy. It is also **random access**, which means that all data can be accessed and written/read directly, regardless of it's physical location. This for example is not possible on tape storage or other physical storage solutions.

#### Secondary storage
Extension of the main storage which provides **non-volatile** storage. Second storage typically consists of **hard disks** (physical disks whose interaction with the CPU are controlled by disk controllers) or **solid state drives** which don't store data physically but in memory cells, which is much faster to interact with.

#### Direct memory access
Allows high-speed I/O devices to write larger blocks of data directly into memory thereby bypassing the CPU, instead of chopping it into bytes and sending it via the CPU. This enhances the speed at which data can be written into main memory from the storage buffer of I/O devices. Only one interrupt is generated per block, instead of one per byte, greatly reducing overhead.

### Computer system architecture
Most systems contain **general-purpose** and **special-purpose** processors. **Multiprocessors** also exist and are growing in popularity.

#### Multiprocessor systems
Multiprocessor systems:
- Are also known as **parallel systems** or **tightly coupled systems**
- Increase throughput, allow for scaling and have increased reliability due to fault tolerance
- Have two types: 
    - **Asymmetric multiprocessing**: each processor is assigned a specific task
    - **Symmetric multiprocessing**: processors work together to solve all tasks (which means that memory is also shared)

Symmetric multiprocessing isn't great for scaling, as it can lead to problems if a large number of CPU's share memory.

##### NUMA multiprocessing architecture
**Non Uniform Memory Access** was created for scaling. With NUMA, all processors have their own memory which they can read faster than external memory. Without shared memory, there are no problems with memory contention thus NUMA makes scaling easier. However if a NUMA node needs to access information from other nodes or other forms of external memory, there will be a performance penalty.

### Booting an OS
1. Power is initialized on the system and execution starts at a fixed memory location
2. OS must be made available so hardware can start it
- A small piece of code (**bootstrap loader (BIOS)**), stored in **ROM (Read Only Memory)** or **flash memory** locates the kernel, loads it into memory and starts it. However, modern systems often use **Unified Extensible Firmware Interface (UEFI)**.
3. Common bootsrap loader **GRUB** allows for selection of kernel from multiple disks, versions, etc.
4. The kernel loads so then the system is running
5. **System daemons** are started.
    > A **daemon** is a background process that is always running and handles specific tasks without user interaction. Examples are system daemons, network daemons, bluetooth daemons, etc.
6. Boot loaders frequentlu allow various boot states, such as single user mode

### Operating system operations
How does the OS work?
**Dual-mode** operations allow the OS to protect itself and other system components, by creating a **user mode** and **kernel mode**, each with different privileges. The **mode bit** is provided by hardware (which means that users can't easily change the mode). Dangerous operations can't be executed by users because they don't have the privileges. System calls turn on kernel mode, after which the task is executed in kernel mode and when the system call returns user mode is switched on again. Some processors like Intel's processors have **protection rings**, which have varying levels of privilege where the kernel is the most privileged and everything else has decreasing levels of privilege.

A **timer** can also be set to prevent code from infinite looping. These timers are set in kernel mode, after which user mode is switched on. When the timer hits 0, an interrupt is generated and the interrupt is handled in kernel mode.

System calls can be grouped into 4 classes:
1. **Process management**: 
    - A **process** an active entity, which means that it's a program (passive entity) in execution. Processes need resources to execute and once they finish these resources need to be reclaimed. Single-threaded processes have one program counter containing the location of the next instruction to execute and the instructions are executed sequentially. Multithreaded processes have one program counter per thread. Activities include: creating/deleting processes, suspending/resuming processes, providing mechanisms for process synchronization, providing mechanisms for process communication, providing mechanisms for deadlock handling.
2. **Memory management**: 
    - To execute a program it's all (or parts of) the instructions and required data must be in main memory. Memory management optimized CPU utilization and keeps track or which parts of memory are being used, which processes and data to move in/out of memory and (de)allocates memory space.
3. **File-system management**:
    - **Files** are logical storage units. The OS provides a uniform way to store files. They are organzied into directories and the OS decides who can access what. The OS also creates/deletes/manipulates files and directories, maps files onto secondary strage and moves backup files onto stable (non-volatile) storage. It also manages mass storage by sometimes moving unused storage to higher levels of storage. The OS also hides the peculiarities of I/O devices by creating uniform interfaces and buffering/caching data from I/O.
4. **Protection and security**:
    - **Protection** controlling access of processes or users to resources defined by the OS.
    - **Security**: defense of the system against internal/external attacks by keeping track of users, assigning them and the groups they're in certain privileges, keeping track of the files they create and making use of **privilege escalation**.

## LECTURE 02: Operating system structures

### Operating system services
**OS Services** provide an environment for execution of programs and services to programs and users. They are basically specialized workspaces that handle specific tasks.

#### User operating system services
- **Program execution**: runs executable files by loading it into memory and running it, ending the program either normally or abnormally
- **I/O operations**: handles I/O interactions
- **User interface**: handles user interfaces, whether it's through a CLI (**Command Line Interface** allows users to interact with a system through commands) or a GUI or other way
- **File system manipulation**: read/write to files
- **Communication**: handle communication between processes (trhough shared memory or message passing)
- **Error detection**: take appropriate action when an error occurs and provide debugging facilities

#### System operating system services
- **Resource allocation**: when multiple users or tasks are running, decide who gets what resources
- **Logging**: keep track of which users there are and what kinds of resources they use
- **Protection and security**: controll access of users/processes to system resources and require authentication to defend the system against foreign I/O access

### System calls
Programming interface for the services provided by the OS, which are typically written in a high-level language. Mostly accessed through **Application Programming Interfaces (API's)**, rather than direct system call use. The three most common API's are Win32, POSIX and Java. System calls are more than just one simple command. They contain a variety of instructions on how to perform a task.

Typically all system calls are associated with a number. The **system call interface** keeps track of all numbers with an indexed table. Whenever a system call is made, the number gets looked up in the system call interface and the corresponding number gets sent as a software interrupt to the CPU. The interrupt gets handled in the OS kernel and returns the status of the system call and any return values.

Sometimes more information has to be given for a system call to have all relevant information. These are some common ways to pass parameters in a system call:
1. Pass the parameters in registers (in some cases there may be more parameters than registers)
2. Store parameters in a block of memory, and pass the address to this block

### Linkers and loaders
Source code is compiled into object files designed to be loaded into any physical memory location (**relocatable object file**). A **linker** combines multiple object files into a **executable** file. The program is stored in binary and must be brought into memory by a **loader** to be executed. **Relocation** is performed to give programs a virtual address space. This makes it easier for programs to access their data, because the virtual memory addresses start at 0 instead of some random index.

Modern general purpose systems dont link libraries into executables, **dynamically linked libraries** are loaded as needed and shared by all executables that need that library. Object and executable files have standard formats so the OS knows how to load and start them.

### Operating system structure
#### Monolithic structure (original UNIX)
With original UNIX OS systems, the OS consisted of two seperate parts: system programs and the kernel. This OS handles everything in between hardware and system calls: i.e. file system, CPU scheduling, memory management, etc.

#### Linux system structure
Linux has a hybrid monolithic and modular design, where you can include or remove certain functionality if it's not needed. 

#### Layered approach
The OS is divided into multiple layers, where the highest layer is the user interface and the lowest layer is the hardware. With modularity, layers are chosen to serve specific system needs. This is the ideal approach but is very hard to do. 

#### Microkernel system structure
This structure moves many parts of the microkernel into the user space. This keeps the kernel minimal and lets many of the important parts of the kernel, such as device drivers and application programs for example be handled as if they were regular user processes. *The main purpose of the microkernel is to relay messages from one module to another*. This approach makes it easier to extend the microkernel, more reliable, easier to port the OS to new architectures and more secure. However, it also causes more overhead of userspace to kernel space because of interprocess communication.

#### Modules
Many modern operating system implement **loadable kernel modules (LKM's)**. This is an object-oriented approach where all core components are seperate and can be used as needed. This is geared towards the layered approach as it is quite similar but even more flexible. 

#### Hybrid systems
Most modern systems, like linux, are a mix of multiple models. These have multiple apporaches to address system needs. Linux kernels for example have kernels in kernel address space which makes them monolythic but also allow for modules for dynamic loading of functionality. Windows is mostly monolithic but is partly monolithic because it allows microkernels for subsystems (e.g. Windows Subsystem for Linux WSL). Apple is also hybrid and it makes use of dynamically loadable modules (**kernel extensions**).
