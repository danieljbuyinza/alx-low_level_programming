section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax   ; Clear rax for printf function

    ; Call printf function
    call printf

    ; Exit the program
    mov eax, 60   ; System call number for exit
    xor edi, edi  ; Exit status 0
    syscall

section .data
    extern printf

