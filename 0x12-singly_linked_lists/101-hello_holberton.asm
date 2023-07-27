
section .data
    hello_message db "Hello, Holberton", 0
    format_string db "%s", 0

section .text
    extern printf, putchar

global main
main:
    push rbp
    mov rbp, rsp

    lea rdi, [rel hello_message]
    mov rax, 0
    call printf

    mov eax, 0x0A  ; ASCII value of new line character
    mov edi, eax
    call putchar

    mov eax, 0     ; Return 0 to indicate successful execution
    leave
    ret
