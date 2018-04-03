#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

void iterator(gpointer key, gpointer value, gpointer user_data) {
	gchar* keyCast = (gchar*) key;
	gint* valueCast = (gint*) value;
	g_printf("%s: %d times\n",keyCast,valueCast);
}

int main(int argc, char** argv) {
	FILE *fp;
	char buff[500];
	GHashTable* hash = g_hash_table_new(g_str_hash, g_str_equal);
	fp = fopen("frankenstein.txt","r");
	printf("File Opened\n");
	while(fgets(buff, 500, fp) != NULL){
		printf("First Line Retrieved\n");
		//printf("%s\n",buff);
		//gchar* token = (gchar*) strtok(buff, " ,.;\n");
		gchar** tokenList = g_strsplit(buff," ",100);
		gchar** ptr;
		for (ptr = tokenList; *ptr; ptr++){
			g_printf("%s\n",*ptr);
			gpointer val = g_hash_table_lookup(hash,*ptr);
			printf("Looked Up Value In Hash\n");
			if(val == NULL){
				g_hash_table_insert(hash,(gpointer) *ptr,(gpointer) 1);
				printf("Added Word\n");
			} else{
				gint* val_increment = (gint*) val + 1;
				g_hash_table_remove(hash,(gconstpointer) *ptr);
				g_hash_table_insert(hash,(gpointer) *ptr,(gpointer) val_increment);
				printf("Incremented Number of Times a Word Appeared\n");
			}
		}
	}
	printf("DONE WITH WHILE LOOP\n");
	g_hash_table_foreach(hash, (GHFunc)iterator, NULL);
	return 0;
}