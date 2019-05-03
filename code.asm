[BITS 16] ;16 bits mode.
[ORG 0x7c00]

main: ;the start of the code.
	;one of these codes will work.
	int 13
	mov ah, 0Dh
	mov bl, 80h ;this one, 
	int 0x10
	mov ah, 0Dh
	mov bl, 80h ;or this,
	int 13
	mov ah, 0Dh
	mov bl, 80h ;or this, 
	int 0x13
	mov ah, 0Dh
	mov bl, 80h ;or this one.
	int 13
	jmp $       ;JUMP FOR INFINITY!

times 510 - ($-$$) db 0 ;fill the rest of the sector with zeros.
DW 0xAA55 ;MAGIC NUMBER!!!!!!!
