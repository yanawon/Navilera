# Navilera
A small RTOS on QEMU(RealViewPB-a8)

## Key Features

- Task Management & Scheduling: Features a non-preemptive, round-robin scheduler that manages tasks via Task Control Blocks (TCBs). Context switching is explicitly triggered by a Kernel_yield() call.

- Interrupts & Events: Manages hardware interrupts using the ARM Generic Interrupt Controller (GIC). An event flag system allows interrupt handlers to asynchronously signal tasks.

- Inter-Task Communication: Implements message queues using a circular buffer to allow tasks to safely send and receive data.

- Synchronization: Provides primitives including Semaphores and Mutexes to protect shared resources and manage access to critical sections. Mutexes are implemented with an ownership concept, distinguishing them from binary semaphores.
