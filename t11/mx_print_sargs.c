void mx_printstr(const char *);

void mx_printchar(char);

int mx_strcmp(const char *, const char *);

int main(int argc, char *argv[]) {
for (int i = 1; i <= argc; i++) {
for (int j = 1; j < argc - 1; j++) {
if (mx_strcmp(argv[j], argv[j+1]) > 0) {
char *swap;
swap = argv[j];
argv[j] = argv[j+1];
argv[j+1] = swap;
}
}
}
for(int i = 1; i < argc; i++) {
mx_printstr(argv[i]);
mx_printchar('\n');
}
return 0;
}
