int load_doc(const char* filename, docinfo* doc_info, docline** head, docline** tail);
void save_doc(const char* filename, docline* head);
int check_file_exists(const char* filename);
