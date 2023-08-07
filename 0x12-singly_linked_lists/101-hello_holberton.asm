section .data
    hello_message db "Hello, Holberton", 0
    new_line db 10, 0
    format_string db "%s%s", 0

section .text
    extern printf
    global main

main:
    push rbp
    mov rbp, rsp

    lea rdi, [rel format_string]
    lea rsi, [rel hello_message]
    lea rdx, [rel new_line]
    xor eax, eax
    call printf

    mov eax, 0  ; return 0 to indicate successful execution

    leave
    ret


