void mx_print_alphabet(void) {
    for (char c = 'A'; c <= 'Z'; c++) {
        if ((c - 'A') % 2 == 0) {
            mx_printchar(c);           
        } else {
            mx_printchar(c + 32);      
        }
    }
    mx_printchar('\n');          
}
