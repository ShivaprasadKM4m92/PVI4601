# 1 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS");
	
	web_cleanup_auto_headers();
	
	lr_start_transaction("ViewAttachments_01_OpenApplication");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.83 Safari/537.36");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
 
 

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("external", 
		"URL={PV_Admin_URL}/external", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	
	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");
	
	web_concurrent_start(0);

	web_url("login-17e4cb116ee46711bb739b7018d00771.css", 
		"URL={PV_Admin_URL}/assets/login-17e4cb116ee46711bb739b7018d00771.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t5.inf", 
		"LAST");

 
 

	web_url("bootstrap.min-79b5346433d3bdf736aab2379a008083.js", 
		"URL={PV_Admin_URL}/assets/vendorUi/bootstrap/bootstrap.min-79b5346433d3bdf736aab2379a008083.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t6.inf", 
		"LAST");

	
 
 

	web_url("jquery.core-2521768e514d3a431ddca828a1bebd3c.js", 
		"URL={PV_Admin_URL}/assets/common/jquery.core-2521768e514d3a431ddca828a1bebd3c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t8.inf", 
		"LAST");

	web_url("notify.min-a1134657dba6e98914066f2530604e68.js", 
		"URL={PV_Admin_URL}/assets/vendorUi/notifyjs/dist/notify.min-a1134657dba6e98914066f2530604e68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t9.inf", 
		"LAST");

	web_url("notify-metro-3463085bfd0a7cac9f983d075b271bca.js", 
		"URL={PV_Admin_URL}/assets/vendorUi/notifications/notify-metro-3463085bfd0a7cac9f983d075b271bca.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t10.inf", 
		"LAST");

	web_url("jquery-fdb24ba38c94d04e948de967076c64aa.js", 
		"URL={PV_Admin_URL}/assets/vendorUi/jquery/jquery-fdb24ba38c94d04e948de967076c64aa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t11.inf", 
		"LAST");


 
 

	web_url("bootstrap-c5ae98cdc147f655f96564c4340000c4.css", 
		"URL={PV_Admin_URL}/assets/bootstrap-c5ae98cdc147f655f96564c4340000c4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t13.inf", 
		"LAST");

	web_concurrent_end(0);
	
	lr_end_transaction("ViewAttachments_01_OpenApplication",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_02_Login");

	
	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"{PV_Admin_URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
	web_reg_save_param_ex(
		"ParamName=Token_Id",
		"LB=token=",
		"RB=\r\n",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/authenticate*",
		"LAST");

	web_reg_find("Search=Body",
		"Text=Welcome to PV Admin",
		"LAST");

	web_submit_data("authenticate", 
		"Action={PV_Admin_URL}/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PV_Admin_URL}/external", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=username", "Value={UserName}", "ENDITEM", 
		"Name=password", "Value={Password}", "ENDITEM", 
		"Name=callBackUrl", "Value=/", "ENDITEM", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(0);

	web_url("change-theme-d6b58272d1305acd108c19d477017de0.js",
		"URL={PV_Admin_URL}/assets/common/change-theme-d6b58272d1305acd108c19d477017de0.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t17.inf",
		"LAST");

 
 

	web_url("jquery-2.2.4-f3b292379cbb03d9a68dc04fb0ac6bf5.js",
		"URL={PV_Admin_URL}/assets/vendorUi/jquery/jquery-2.2.4-f3b292379cbb03d9a68dc04fb0ac6bf5.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t18.inf",
		"LAST");

 
 

	web_url("application-3d87bac6ca7e570033e3b49e320180b2.css",
		"URL={PV_Admin_URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t19.inf",
		"LAST");

 
 

	web_url("UIConstants-e05f20031f3c986ffd86b552402112e0.js",
		"URL={PV_Admin_URL}/assets/UIConstants-e05f20031f3c986ffd86b552402112e0.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t20.inf",
		"LAST");

 
 

	web_url("application-73702747dcb4dc1831955be89087898f.js",
		"URL={PV_Admin_URL}/assets/application-73702747dcb4dc1831955be89087898f.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t21.inf",
		"LAST");

 
 
 
 
 
 
 

	web_url("loadTheme",
		"URL={PV_Admin_URL}/preference/loadTheme",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t22.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("en.json",
		"URL={PV_Admin_URL}/assets/i18n/en.json",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t23.inf",
		"Mode=HTTP",
		"LAST");
 
 
 
 
 
 
 
 

	web_url("OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2", 
		"URL={PV_Admin_URL}/assets/OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2?v=1.1.0", 
		"Resource=1", 
		"Referer={PV_Admin_URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t24.inf", 
		"LAST");

 
 
 
 
 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={PV_Admin_URL}/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"Referer={PV_Admin_URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t25.inf", 
		"LAST");

 
 
 
 
 

	web_url("materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2", 
		"URL={PV_Admin_URL}/assets/materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2?v=2.1.99", 
		"Resource=1", 
		"Referer={PV_Admin_URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t26.inf", 
		"LAST");

	web_concurrent_end(0);

	lr_end_transaction("ViewAttachments_02_Login",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_03_NavigateToPVIntake");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	
	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
	web_reg_save_param_ex(
		"ParamName=Toke_Id_2",
		"LB= content=\"",
		"RB=\"/>\n        ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/10.100.22.243:8081/*",
		"LAST");

	web_reg_find("Search=Body",
		"Text=PV Intake",
		"LAST");

	web_url("10.100.22.243:8081",
		"URL={PVI_URL}/",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PV_Admin_URL}/?token={Token_Id}",
		"Snapshot=t28.inf",
		"Mode=HTTP",
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(0);

	web_url("dashboard-manifest-b8c4a5998dad68d4595e4d0aa8d50016.css", 
		"URL={PVI_URL}/assets/app/dashboard/dashboard-manifest-b8c4a5998dad68d4595e4d0aa8d50016.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/", 
		"Snapshot=t29.inf", 
		"LAST");

 
 

	web_url("jquery-2.2.4-e72e6e97da5fd952079c33c415741fc6.js", 
		"URL={PVI_URL}/assets/vendorUi/jquery/jquery-2.2.4-e72e6e97da5fd952079c33c415741fc6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t30.inf", 
		"LAST");

 
 

	web_url("application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"URL={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/", 
		"Snapshot=t31.inf", 
		"LAST");

 
 

	web_url("change-theme-6ebd5f05979bc64dfe2d6f10b3e3b3db.js", 
		"URL={PVI_URL}/assets/common/change-theme-6ebd5f05979bc64dfe2d6f10b3e3b3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t32.inf", 
		"LAST");

 
 

	web_url("UIConstants-ee3587ab40d47b8bed173814ecf5a0be.js", 
		"URL={PVI_URL}/assets/UIConstants-ee3587ab40d47b8bed173814ecf5a0be.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t33.inf", 
		"LAST");

 
 
 
 
 
 
 

	web_url("loadTheme_2", 
		"URL={PVI_URL}/preference/loadTheme", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2_2", 
		"URL={PVI_URL}/assets/OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2?v=1.1.0", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("dashboard-manifest-10f1ed9d89cf396671bd4e3042b74253.js", 
		"URL={PVI_URL}/assets/app/dashboard/dashboard-manifest-10f1ed9d89cf396671bd4e3042b74253.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("attachmentViewer-manifest-b347c0c37643c7b9e173f4b09adae617.js", 
		"URL={PVI_URL}/assets/vendor/attachmentViewer-manifest-b347c0c37643c7b9e173f4b09adae617.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t37.inf", 
		"LAST");

 
 
 
 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2_2", 
		"URL={PVI_URL}/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t38.inf", 
		"LAST");

 
 

	web_url("materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2_2", 
		"URL={PVI_URL}/assets/materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2?v=2.1.99", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t39.inf", 
		"LAST");

 

	web_url("application-a0469687a4859320633b35ed9c5374ee.js", 
		"URL={PVI_URL}/assets/application-a0469687a4859320633b35ed9c5374ee.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t40.inf", 
		"LAST");

 
 
 
 
 

	web_url("appConfig", 
		"URL={PVI_URL}/config/appConfig", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("loadAllState", 
		"URL={PVI_URL}/user/loadAllState?pageType=&section=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("referenceData", 
		"URL={PVI_URL}/task/referenceData?_=1598978491639", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("loadServerTime", 
		"URL={PVI_URL}/config/loadServerTime?_=1598978491640", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("personalStats", 
		"URL={PVI_URL}/dashboard/personalStats?_=1598978491641", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={PVI_URL}/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("predefinedSearch.json", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598978491645", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("commentTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598978491647", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("1", 
		"URL={PVI_URL}/case/rest/list_columns/1?_=1598978491643", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("en-US.json", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598978491644", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReason.json", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598978491646", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("2", 
		"URL={PVI_URL}/case/rest/list_columns/2?_=1598978491642", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("copyOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598978491649", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("contextMenuTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598978491648", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("esignOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598978491651", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("downloadOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598978491650", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hyperlinkMenuTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598978491652", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("imageStampOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598978491653", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("overwriteOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598978491654", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("pageRedactionOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598978491655", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	web_add_header("Origin", 
		"{PVI_URL}");

	web_add_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");
	
	web_concurrent_start(0);

	web_submit_data("loadState", 
		"Action={PVI_URL}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=pageType", "Value=case_list_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_url("printTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598978491657", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598978491656", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReasonTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598978491658", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("unsavedChangesOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598978491659", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"{PVI_URL}");

	web_add_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");

	web_concurrent_start(0);
	
	web_submit_data("updateWidget", 
		"Action={PVI_URL}/dashboard/updateWidget", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t66.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=items", "Value=[\n    {\n        \"id\": \"789\",\n        \"x\": 0,\n        \"y\": 0,\n        \"width\": 3,\n        \"height\": 3\n    },\n    {\n        \"id\": \"790\",\n        \"x\": 3,\n        \"y\": 0,\n        \"width\": 9,\n        \"height\": 3\n    },\n    {\n        \"id\": \"791\",\n        \"x\": 0,\n        \"y\": 3,\n        \"width\": 12,\n        \"height\": 7\n    },\n    {\n        \"id\": \"792\",\n        \"x\": 0,\n        \"y\": 10,\n        \"width\": 12,\n       "
		" \"height\": 7\n    }\n]", "ENDITEM", 
		"LAST");

 
 

	web_url("viewerTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598978491660", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		"LAST");
	
	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");
	
	web_concurrent_start(0);

	web_submit_data("updateWidget_2", 
		"Action={PVI_URL}/dashboard/updateWidget", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=items", "Value=[\n    {\n        \"id\": \"789\",\n        \"x\": 0,\n        \"y\": 0,\n        \"width\": 3,\n        \"height\": 3\n    },\n    {\n        \"id\": \"790\",\n        \"x\": 3,\n        \"y\": 0,\n        \"width\": 9,\n        \"height\": 3\n    },\n    {\n        \"id\": \"791\",\n        \"x\": 0,\n        \"y\": 3,\n        \"width\": 12,\n        \"height\": 7\n    },\n    {\n        \"id\": \"792\",\n        \"x\": 0,\n        \"y\": 10,\n        \"width\": 12,\n       "
		" \"height\": 7\n    }\n]", "ENDITEM", 
		"LAST");

 
 

	web_submit_data("loadState_2", 
		"Action={PVI_URL}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_submit_data("1_2", 
		"Action={PVI_URL}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t70.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[2][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[3][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[5][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=products", "ENDITEM", 
		"Name=columns[6][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=events", "ENDITEM", 
		"Name=columns[7][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[9][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[10][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[11][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=priority", "ENDITEM", 
		"Name=columns[13][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[14][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[15][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[16][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[17][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[18][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=gender", "ENDITEM", 
		"Name=columns[19][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=destination", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[21][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[23][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[24][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[25][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[26][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[30][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[31][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[32][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[33][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[34][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[35][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=categories", "ENDITEM", 
		"Name=columns[36][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=productName", "ENDITEM", 
		"Name=columns[37][name]", "Value=productName", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=substances", "ENDITEM", 
		"Name=columns[38][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[39][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"2,3,4,6\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"reportDistributionThreshold\":true,\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-02T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-31T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=3", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=5", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("2_2", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value={UserName}", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=5", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

 
 
 

	web_url("casePrioritySelect.hbs", 
		"URL={PVI_URL}/assets/common/hbs-templates/casePrioritySelect.hbs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewAction.hbs", 
		"URL={PVI_URL}/assets/common/hbs-templates/viewAction.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/", 
		"Snapshot=t73.inf", 
		"LAST");

	web_url("getActionViewList", 
		"URL={PVI_URL}/case/getActionViewList?pageId=1&sourceDbId=1&_=1598978491661", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);

	lr_end_transaction("ViewAttachments_03_NavigateToPVIntake",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_04_IntakeQueueMyCases");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("queue", 
		"URL={PVI_URL}/intake/queue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("list-24eb5f840484c7ed5a76f95c9fe17ba2.css", 
		"URL={PVI_URL}/assets/list/list-24eb5f840484c7ed5a76f95c9fe17ba2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t77.inf", 
		"LAST");

	web_url("list-manifest-185621e31c59b25205353c6a318d5899.js", 
		"URL={PVI_URL}/assets/app/list/list-manifest-185621e31c59b25205353c6a318d5899.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t78.inf", 
		"LAST");

 
 
 
 
 
 
 

	web_url("copyOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598978515275", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReason.json_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598978515272", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("downloadOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598978515276", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("predefinedSearch.json_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598978515271", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("commentTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598978515273", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("contextMenuTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598978515274", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("en-US.json_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598978515270", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("esignOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598978515277", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("pageRedactionOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598978515281", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("imageStampOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598978515279", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598978515282", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("printTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598978515283", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("overwriteOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598978515280", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("unsavedChangesOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598978515285", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReasonTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598978515284", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewerTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598978515286", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("hyperlinkMenuTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598978515278", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("2_3", 
		"URL={PVI_URL}/case/rest/list_columns/2?_=1598978515287", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("loadServerTime_2", 
		"URL={PVI_URL}/config/loadServerTime?_=1598978515288", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		"LAST");
	
	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");

	
	web_concurrent_start(0);
	
	web_submit_data("loadState_3", 
		"Action={PVI_URL}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_submit_data("saveState", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978520304,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"{UserName}\",\""
		"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}"
		",{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\"caseInsensitive\""
		":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\""
		":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\","
		"\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_2", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978520361,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"{UserName}\",\""
		"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}"
		",{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\"caseInsensitive\""
		":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\""
		":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\","
		"\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	web_submit_data("2_4", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value={UserName}", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

 
 
 

	web_url("getActionViewList_2", 
		"URL={PVI_URL}/case/getActionViewList?pageId=2&sourceDbId=1&_=1598978515289", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		"LAST");

	
	web_concurrent_end(0);
	lr_end_transaction("ViewAttachments_04_IntakeQueueMyCases",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_05_IntakeQueueAllCases");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");

	web_submit_data("2_5", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=3", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_3", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978535221,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\"caseInsensitive\""
		":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\""
		":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\","
		"\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	lr_end_transaction("ViewAttachments_05_IntakeQueueAllCases",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_06_FilterIntakeCaseNum");

	web_custom_request("saveState_4", 
		"URL={PVI_URL}/user/saveState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data="
		"%7B%22form.intake_queue_form%3Einput%22%3A%22{CaseId_10MB}%22%2C%22form.intake_queue_form%3Eselect.date-range-type.persisting%22%3A%22firstReceiptDate%22%2C%22form.intake_queue_form%3Eselect.pviListDateRange.persisting%22%3A%22LAST_X_DAYS%22%2C%22form.intake_queue_form%3Einput.range-factor-field.persisting%22%3A%22365%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeStartDate.persisting%22%3A%22%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeEndDate.persisting%22%3A%22%22%2C%22form.int"
		"ake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Einput.1-0%22%3A%22checked%22%2C%22form.intake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Einput.2-1%22%3A%22checked%22%7D&pageType=intake_queue_form&section=FORM_STATE", 
		"LAST");

	 
	web_reg_save_param_ex(
		"ParamName=Doc_Id_1",
		"LB=attachments\":[{\"id\":",
		"RB=.0,\"name\"",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

	
	web_reg_find("Search=Body",
		"Text={CaseId_10MB}",
		"LAST");

	web_submit_data("2_6", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=4", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"{CaseId_10MB}\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_5", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978559851,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"{CaseId_10MB}\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	lr_end_transaction("ViewAttachments_06_FilterIntakeCaseNum",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_07_ViewAttachment10MB");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
 
 
 
 
 
 
 
 
 

	web_reg_find("Search=Body",
		"Text=Attachment Viewer",
		"LAST");

	web_url("fetchDocument", 
		"URL={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("attachmentViewer-manifest-d21cd5ef9afc9d23b8e3146c7832bb09.css",
		"URL={PVI_URL}/assets/vendor/documentViewer/attachmentViewer-manifest-d21cd5ef9afc9d23b8e3146c7832bb09.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t109.inf",
		"LAST");

 
 
 
 
 

	web_url("predefinedSearch.json_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("en-US.json_3",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t111.inf",
		"Mode=HTTP",
		"LAST");

	web_url("redactionReason.json_3",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t112.inf",
		"Mode=HTTP",
		"LAST");

	web_url("copyOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t113.inf",
		"Mode=HTTP",
		"LAST");

	web_url("downloadOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t114.inf",
		"Mode=HTTP",
		"LAST");

	web_url("esignOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t115.inf",
		"Mode=HTTP",
		"LAST");

	web_url("hyperlinkMenuTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("imageStampOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t117.inf",
		"Mode=HTTP",
		"LAST");

	web_url("overwriteOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t118.inf",
		"Mode=HTTP",
		"LAST");

	web_url("pageRedactionOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t119.inf",
		"Mode=HTTP",
		"LAST");

	web_url("printOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("redactionReasonTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("unsavedChangesOverlayTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t122.inf",
		"Mode=HTTP",
		"LAST");

	web_url("printTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewerTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t124.inf",
		"Mode=HTTP",
		"LAST");

	web_url("contextMenuTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t125.inf",
		"Mode=HTTP",
		"LAST");

	web_url("commentTemplate.html_3",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t126.inf",
		"Mode=HTTP",
		"LAST");

	web_concurrent_end(0);
	
 
 

 
	web_reg_save_param_ex(
		"ParamName=Document_Id_1",
		"LB=documentID: encodeURIComponent('",
		"RB='",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/fetchDocument*",
		"LAST");

	web_submit_data("fetchDocument_2",
		"Action={PVI_URL}/caseEntry/fetchDocument",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t127.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=id", "Value={Doc_Id_1}", "ENDITEM",
		"Name=viewerId", "Value=attachmentView", "ENDITEM",
		"Name=redact", "Value=false", "ENDITEM",
		"Name=isDisplayView", "Value=false", "ENDITEM",
		"Name=isFollowUpQuery", "Value=", "ENDITEM",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"GET");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	


	web_custom_request("ClientViewer",
		"URL={Doc_URL}/License/ClientViewer?v=8.4&iv=6CDF00F1-591334C8-8DD444DB-8FC98D5F&p=24",
		"Method=OPTIONS",
		"Resource=0",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t128.inf",
		"Mode=HTTP",
		"LAST");
	
	web_concurrent_start(0);

	web_url("0",
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Document_Id_1}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t129.inf",
		"LAST");
	
	web_concurrent_end(0);

	web_custom_request("0_2",
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Document_Id_1}&Scale=1&ContentType=svga",
		"Method=OPTIONS",
		"Resource=0",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t130.inf",
		"Mode=HTTP",
		"LAST");

	web_custom_request("Attributes",
		"URL={Doc_URL}/Document/q/Attributes?DocumentID=u{Document_Id_1}&DesiredPageCountConfidence=50",
		"Method=OPTIONS",
		"Resource=0",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t131.inf",
		"Mode=HTTP",
		"LAST");

	web_custom_request("0_3",
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Document_Id_1}&Scale=1&ContentType=svga",
		"Method=OPTIONS",
		"Resource=0",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t132.inf",
		"Mode=HTTP",
		"LAST");

 
 
 
 
 
 
 
 

	web_custom_request("Attributes_2",
		"URL={Doc_URL}/Document/q/Attributes?DocumentID=u{Document_Id_1}&DesiredPageCountConfidence=50",
		"Method=GET",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t133.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"LAST");

	web_concurrent_start(0);
	web_url("1_3",
		"URL={Doc_URL}/Page/q/1?DocumentID=u{Document_Id_1}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t134.inf",
		"LAST");

 
 
 
 

	web_url("Text",
		"URL={Doc_URL}/Document/q/0-0/Text?DocumentID=u{Document_Id_1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t135.inf",
		"Mode=HTTP",
		"LAST");

 
 

	web_url("ImageStampList",
		"URL={Doc_URL}/ImageStampList",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t136.inf",
		"Mode=HTTP",
		"LAST");

	web_url("q",
		"URL={Doc_URL}/ImageStamp/UENDLUNoZWNrbWFyay1JbWFnZS1TdGFtcC5wbmc=/q?format=Base64",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t137.inf",
		"Mode=HTTP",
		"LAST");

 

	web_url("2_7",
		"URL={Doc_URL}/Page/q/2?DocumentID=u{Document_Id_1}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t138.inf",
		"LAST");

	web_url("3",
		"URL={Doc_URL}/Page/q/3?DocumentID=u{Document_Id_1}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t139.inf",
		"LAST");

 
 
 
 
 
 

	web_url("Text_2",
		"URL={Doc_URL}/Document/q/1-1/Text?DocumentID=u{Document_Id_1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t140.inf",
		"Mode=HTTP",
		"LAST");

	web_url("Text_3",
		"URL={Doc_URL}/Document/q/2-2/Text?DocumentID=u{Document_Id_1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t141.inf",
		"Mode=HTTP",
		"LAST");

	web_url("Text_4",
		"URL={Doc_URL}/Document/q/3-3/Text?DocumentID=u{Document_Id_1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_1}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t142.inf",
		"Mode=HTTP",
		"LAST");
	
	web_concurrent_end(0);

	lr_end_transaction("ViewAttachments_07_ViewAttachment10MB",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_09_FilterCase");

	(web_remove_auto_header("accept", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("saveState_6", 
		"URL={PVI_URL}/user/saveState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data="
		"%7B%22form.intake_queue_form%3Einput%22%3A%22{CaseId_1MB}%22%2C%22form.intake_queue_form%3Eselect.date-range-type.persisting%22%3A%22firstReceiptDate%22%2C%22form.intake_queue_form%3Eselect.pviListDateRange.persisting%22%3A%22LAST_X_DAYS%22%2C%22form.intake_queue_form%3Einput.range-factor-field.persisting%22%3A%22365%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeStartDate.persisting%22%3A%22%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeEndDate.persisting%22%3A%22%22%2C%22form.int"
		"ake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Einput.1-0%22%3A%22checked%22%2C%22form.intake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Einput.2-1%22%3A%22checked%22%7D&pageType=intake_queue_form&section=FORM_STATE", 
		"LAST");
	
	 
	web_reg_save_param_ex(
		"ParamName=Doc_Id_2",
		"LB=attachments\":[{\"id\":",
		"RB=.0,\"name\"",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

	web_reg_find("Search=Body",
		"Text={CaseId_1MB}",
		"LAST");

	web_submit_data("2_8", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=5", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"{CaseId_1MB}\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_7", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978610816,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"{CaseId_1MB}\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	lr_end_transaction("ViewAttachments_09_FilterCase",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_10_ViewAttachment1MB");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Attachment Viewer",
		"LAST");

	web_url("fetchDocument_3", 
		"URL={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);
	web_url("en-US.json_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t148.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	web_url("copyOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("predefinedSearch.json_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t150.inf", 
		"LAST");

 
 

	web_url("downloadOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("redactionReason.json_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t152.inf", 
		"LAST");

 
 

	web_url("commentTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("contextMenuTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("esignOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("printOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("imageStampOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("printTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("hyperlinkMenuTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("overwriteOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("pageRedactionOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("redactionReasonTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("viewerTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("unsavedChangesOverlayTemplate.html_4", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	web_add_auto_header("Origin", 
		"{PVI_URL}");

 



	web_reg_save_param_ex(
		"ParamName=Document_Id_2",
		"LB/IC=documentID: encodeURIComponent('",
		"RB/IC='",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("fetchDocument_4", 
		"Action={PVI_URL}/caseEntry/fetchDocument", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=id", "Value={Doc_Id_2}", "ENDITEM", 
		"Name=viewerId", "Value=attachmentView", "ENDITEM", 
		"Name=redact", "Value=false", "ENDITEM", 
		"Name=isDisplayView", "Value=false", "ENDITEM", 
		"Name=isFollowUpQuery", "Value=", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"GET");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	


	web_custom_request("ClientViewer_2", 
		"URL={Doc_URL}/License/ClientViewer?v=8.4&iv=F6FA5216-099F781F-554E1764-8E26C734&p=24", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		"LAST");
	
	web_concurrent_start(0);

	web_url("0_4",
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Document_Id_2}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t167.inf",
		"LAST");
	
	web_concurrent_end(0);

	web_custom_request("0_5", 
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Document_Id_2}&Scale=1&ContentType=svga", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("0_6", 
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Document_Id_2}&Scale=1&ContentType=svga", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("Attributes_3", 
		"URL={Doc_URL}/Document/q/Attributes?DocumentID=u{Document_Id_2}&DesiredPageCountConfidence=50", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	web_custom_request("Attributes_4", 
		"URL={Doc_URL}/Document/q/Attributes?DocumentID=u{Document_Id_2}&DesiredPageCountConfidence=50", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"LAST");

 
 
 
 

	web_concurrent_start(0);
	web_url("Text_5", 
		"URL={Doc_URL}/Document/q/0-0/Text?DocumentID=u{Document_Id_2}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("ImageStampList_2", 
		"URL={Doc_URL}/ImageStampList", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("1_4",
		"URL={Doc_URL}/Page/q/1?DocumentID=u{Document_Id_2}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t174.inf",
		"LAST");

 
 
 
 

	web_url("Text_6",
		"URL={Doc_URL}/Document/q/1-1/Text?DocumentID=u{Document_Id_2}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t175.inf",
		"Mode=HTTP",
		"LAST");
 
 
 
 
 

	web_url("2_9",
		"URL={Doc_URL}/Page/q/2?DocumentID=u{Document_Id_2}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t176.inf",
		"LAST");

 
 

	web_url("3_2",
		"URL={Doc_URL}/Page/q/3?DocumentID=u{Document_Id_2}&Scale=1&ContentType=svga",
		"Resource=1",
		"RecContentType=image/svg+xml",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t177.inf",
		"LAST");

 

	web_url("Text_7", 
		"URL={Doc_URL}/Document/q/2-2/Text?DocumentID=u{Document_Id_2}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Text_8", 
		"URL={Doc_URL}/Document/q/3-3/Text?DocumentID=u{Document_Id_2}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_2}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);
	
	lr_end_transaction("ViewAttachments_10_ViewAttachment1MB",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_12_SortCaseNum");

	(web_remove_auto_header("accept", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("saveState_8", 
		"URL={PVI_URL}/user/saveState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data="
		"%7B%22form.intake_queue_form%3Einput%22%3A%22{Case_Id_500KB}%22%2C%22form.intake_queue_form%3Eselect.date-range-type.persisting%22%3A%22firstReceiptDate%22%2C%22form.intake_queue_form%3Eselect.pviListDateRange.persisting%22%3A%22LAST_X_DAYS%22%2C%22form.intake_queue_form%3Einput.range-factor-field.persisting%22%3A%22365%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeStartDate.persisting%22%3A%22%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeEndDate.persisting%22%3A%22%22%2C%22form.int"
		"ake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Einput.1-0%22%3A%22checked%22%2C%22form.intake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Einput.2-1%22%3A%22checked%22%7D&pageType=intake_queue_form&section=FORM_STATE", 
		"LAST");
	
	 
	web_reg_save_param_ex(
		"ParamName=Doc_Id_3",
		"LB=attachments\":[{\"id\":",
		"RB=.0,\"name\"",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

	web_reg_find("Search=Body",
		"Text={Case_Id_500KB}",
		"LAST");

	web_submit_data("2_10", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=6", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"{Case_Id_500KB}\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_9", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978659486,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"{Case_Id_500KB}\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	lr_end_transaction("ViewAttachments_12_SortCaseNum",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_13_ViewAttachment500KB");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Attachment Viewer",
		"LAST");

	web_url("fetchDocument_5", 
		"URL={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		"LAST");

	
	web_concurrent_start(0);
	
	web_url("en-US.json_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t185.inf", 
		"LAST");

 
 
 
 
 
 
 
 

	web_url("copyOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 

	web_url("predefinedSearch.json_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t187.inf", 
		"LAST");

 
 

	web_url("redactionReason.json_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t188.inf", 
		"LAST");

 

 
 

	web_url("contextMenuTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("commentTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("downloadOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("esignOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("hyperlinkMenuTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("overwriteOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("printOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("If-None-Match", 
		"\"vendor/documentViewerTemplates/pageRedactionOverlayTemplate-afe8d47b1a2879a069a0a4f4ded18346.html\"");

	web_url("pageRedactionOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("imageStampOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("printTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("redactionReasonTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("viewerTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("unsavedChangesOverlayTemplate.html_5", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		"LAST");
	
	web_concurrent_end(0);

	web_add_auto_header("Origin", 
		"{PVI_URL}");

 



	web_reg_save_param_ex(
		"ParamName=Docum_Id_1",
		"LB/IC=documentID: encodeURIComponent('",
		"RB/IC='",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("fetchDocument_6", 
		"Action={PVI_URL}/caseEntry/fetchDocument", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=id", "Value={Doc_Id_3}", "ENDITEM", 
		"Name=viewerId", "Value=attachmentView", "ENDITEM", 
		"Name=redact", "Value=false", "ENDITEM", 
		"Name=isDisplayView", "Value=false", "ENDITEM", 
		"Name=isFollowUpQuery", "Value=", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"GET");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	
	

	web_custom_request("ClientViewer_3", 
		"URL={Doc_URL}/License/ClientViewer?v=8.4&iv=9054C549-3FDD8E70-37E1A035-77955626&p=24", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);
	
	web_url("0_7", 
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Docum_Id_1}&Scale=1&ContentType=svga", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t204.inf", 
		"LAST");

	web_concurrent_end(0);
	
	web_custom_request("0_8", 
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Docum_Id_1}&Scale=1&ContentType=svga", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("0_9", 
		"URL={Doc_URL}/Page/q/0?DocumentID=u{Docum_Id_1}&Scale=1&ContentType=svga", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("Attributes_5", 
		"URL={Doc_URL}/Document/q/Attributes?DocumentID=u{Docum_Id_1}&DesiredPageCountConfidence=50", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	web_custom_request("Attributes_6", 
		"URL={Doc_URL}/Document/q/Attributes?DocumentID=u{Docum_Id_1}&DesiredPageCountConfidence=50", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"LAST");
 
 
 
 
 

	web_concurrent_start(0);
	
	web_url("Text_9", 
		"URL={Doc_URL}/Document/q/0-0/Text?DocumentID=u{Docum_Id_1}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("ImageStampList_3", 
		"URL={Doc_URL}/ImageStampList", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		"LAST");

 

	web_url("1_5", 
		"URL={Doc_URL}/Page/q/1?DocumentID=u{Docum_Id_1}&Scale=1&ContentType=svga", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t211.inf", 
		"LAST");

	web_url("2_11", 
		"URL={Doc_URL}/Page/q/2?DocumentID=u{Docum_Id_1}&Scale=1&ContentType=svga", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t212.inf", 
		"LAST");

	web_url("3_3", 
		"URL={Doc_URL}/Page/q/3?DocumentID=u{Docum_Id_1}&Scale=1&ContentType=svga", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t213.inf", 
		"LAST");

 
 
 
 
 
 

	web_url("Text_10", 
		"URL={Doc_URL}/Document/q/1-1/Text?DocumentID=u{Docum_Id_1}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Text_11", 
		"URL={Doc_URL}/Document/q/2-2/Text?DocumentID=u{Docum_Id_1}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("Text_12",
		"URL={Doc_URL}/Document/q/3-3/Text?DocumentID=u{Docum_Id_1}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/fetchDocument?id={Doc_Id_3}&viewerId=attachmentView&isDisplayView=true&redact=undefined",
		"Snapshot=t216.inf",
		"Mode=HTTP",
		"LAST");
	
	web_concurrent_end(0);

	lr_end_transaction("ViewAttachments_13_ViewAttachment500KB",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_14_ClearFilter");

	(web_remove_auto_header("accept", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Toke_Id_2}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("saveState_10", 
		"URL={PVI_URL}/user/saveState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data="
		"%7B%22form.intake_queue_form%3Einput%22%3A%22%22%2C%22form.intake_queue_form%3Eselect.date-range-type.persisting%22%3A%22firstReceiptDate%22%2C%22form.intake_queue_form%3Eselect.pviListDateRange.persisting%22%3A%22LAST_X_DAYS%22%2C%22form.intake_queue_form%3Einput.range-factor-field.persisting%22%3A%22365%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeStartDate.persisting%22%3A%22%22%2C%22form.intake_queue_form%3Einput.datepicker-rangeEndDate.persisting%22%3A%22%22%2C%22form.intake_queue_f"
		"orm%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Einput.1-0%22%3A%22checked%22%2C%22form.intake_queue_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Einput.2-1%22%3A%22checked%22%7D&pageType=intake_queue_form&section=FORM_STATE", 
		"LAST");

	web_submit_data("2_12", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=7", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_11", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978696957,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\"caseInsensitive\""
		":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\""
		":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\","
		"\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	lr_end_transaction("ViewAttachments_14_ClearFilter",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_IntakeQueueMyCases");

	web_submit_data("2_13", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=8", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=selected", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][name]", "Value=intakeCaseNumber", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=firstReceiptDateString", "ENDITEM", 
		"Name=columns[2][name]", "Value=firstReceiptDate", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=products", "ENDITEM", 
		"Name=columns[3][name]", "Value=products.name", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=attachments", "ENDITEM", 
		"Name=columns[4][name]", "Value=attachments.name", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=senderType", "ENDITEM", 
		"Name=columns[5][name]", "Value=senderType.value", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][name]", "Value=senderName", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][name]", "Value=assignedToUsername", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[7][search][value]", "Value={UserName}", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][name]", "Value=caseVersion", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=reporterQualification", "ENDITEM", 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=events", "ENDITEM", 
		"Name=columns[10][name]", "Value=events.eventName", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=caseSeriousness", "ENDITEM", 
		"Name=columns[11][name]", "Value=caseSeriousness.category", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=priority", "ENDITEM", 
		"Name=columns[12][name]", "Value=priority.value", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=dueDateString", "ENDITEM", 
		"Name=columns[13][name]", "Value=dueDate", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][name]", "Value=isRelated", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][name]", "Value=safetyCaseNumber", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][name]", "Value=reportType", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][name]", "Value=patientAge", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=gender", "ENDITEM", 
		"Name=columns[18][name]", "Value=gender.value", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=destination", "ENDITEM", 
		"Name=columns[19][name]", "Value=icsr.destination", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=reportDueDateString", "ENDITEM", 
		"Name=columns[20][name]", "Value=icsr.dueDate", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][name]", "Value=reporterComments", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[22][name]", "Value=reporters.name", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=eventCountry", "ENDITEM", 
		"Name=columns[23][name]", "Value=eventCountry.name", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=reportVersion", "ENDITEM", 
		"Name=columns[24][name]", "Value=icsr.reportVersion", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=icsr", "ENDITEM", 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=stateTimestampString", "ENDITEM", 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=reportMessage", "ENDITEM", 
		"Name=columns[27][name]", "Value=icsr.reportMessage", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][name]", "Value=eventName", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][name]", "Value=eventStartDate", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[30][name]", "Value=outcome.value", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=reporterCountry", "ENDITEM", 
		"Name=columns[31][name]", "Value=reporters.countryName", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][name]", "Value=relatednessString", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=sourceType", "ENDITEM", 
		"Name=columns[33][name]", "Value=sourceType.type", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=categories", "ENDITEM", 
		"Name=columns[34][name]", "Value=categories.value", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", "ENDITEM", 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=productName", "ENDITEM", 
		"Name=columns[36][name]", "Value=productName", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[37][data]", "Value=substances", "ENDITEM", 
		"Name=columns[37][name]", "Value=substances.nameValue", "ENDITEM", 
		"Name=columns[37][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[37][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[37][search][value]", "Value=", "ENDITEM", 
		"Name=columns[37][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[38][data]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][name]", "Value=studyNumber", "ENDITEM", 
		"Name=columns[38][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[38][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[38][search][value]", "Value=", "ENDITEM", 
		"Name=columns[38][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[39][data]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][name]", "Value=caseState", "ENDITEM", 
		"Name=columns[39][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[39][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[39][search][value]", "Value=", "ENDITEM", 
		"Name=columns[39][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[40][data]", "Value=versionType", "ENDITEM", 
		"Name=columns[40][name]", "Value=versionType.value", "ENDITEM", 
		"Name=columns[40][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[40][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[40][search][value]", "Value=", "ENDITEM", 
		"Name=columns[40][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[41][data]", "Value=receiptDateString", "ENDITEM", 
		"Name=columns[41][name]", "Value=receiptDate", "ENDITEM", 
		"Name=columns[41][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[41][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[41][search][value]", "Value=", "ENDITEM", 
		"Name=columns[41][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[42][data]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][name]", "Value=onsetDate", "ENDITEM", 
		"Name=columns[42][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[42][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[42][search][value]", "Value=", "ENDITEM", 
		"Name=columns[42][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[43][data]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][name]", "Value=submissionDate", "ENDITEM", 
		"Name=columns[43][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[43][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[43][search][value]", "Value=", "ENDITEM", 
		"Name=columns[43][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[44][data]", "Value=dosageForm", "ENDITEM", 
		"Name=columns[44][name]", "Value=dosageForm.value", "ENDITEM", 
		"Name=columns[44][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[44][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[44][search][value]", "Value=", "ENDITEM", 
		"Name=columns[44][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[45][data]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][name]", "Value=caseVersionType", "ENDITEM", 
		"Name=columns[45][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[45][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[45][search][value]", "Value=", "ENDITEM", 
		"Name=columns[45][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[46][data]", "Value=icsrType", "ENDITEM", 
		"Name=columns[46][name]", "Value=icsr.type", "ENDITEM", 
		"Name=columns[46][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[46][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[46][search][value]", "Value=", "ENDITEM", 
		"Name=columns[46][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[47][data]", "Value=studyType", "ENDITEM", 
		"Name=columns[47][name]", "Value=studyType.value", "ENDITEM", 
		"Name=columns[47][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[47][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[47][search][value]", "Value=", "ENDITEM", 
		"Name=columns[47][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[48][data]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][name]", "Value=patientName", "ENDITEM", 
		"Name=columns[48][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[48][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[48][search][value]", "Value=", "ENDITEM", 
		"Name=columns[48][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[49][data]", "Value=seriousness", "ENDITEM", 
		"Name=columns[49][name]", "Value=seriousnessString", "ENDITEM", 
		"Name=columns[49][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[49][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[49][search][value]", "Value=", "ENDITEM", 
		"Name=columns[49][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[50][data]", "Value=caseCountry", "ENDITEM", 
		"Name=columns[50][name]", "Value=caseCountry.name", "ENDITEM", 
		"Name=columns[50][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[50][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[50][search][value]", "Value=", "ENDITEM", 
		"Name=columns[50][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[51][data]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][name]", "Value=allReferences", "ENDITEM", 
		"Name=columns[51][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[51][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[51][search][value]", "Value=", "ENDITEM", 
		"Name=columns[51][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[52][data]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][name]", "Value=patientId", "ENDITEM", 
		"Name=columns[52][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[52][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[52][search][value]", "Value=", "ENDITEM", 
		"Name=columns[52][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[53][data]", "Value=dobString", "ENDITEM", 
		"Name=columns[53][name]", "Value=dob", "ENDITEM", 
		"Name=columns[53][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[53][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[53][search][value]", "Value=", "ENDITEM", 
		"Name=columns[53][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[54][data]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][name]", "Value=matchScore", "ENDITEM", 
		"Name=columns[54][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[54][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[54][search][value]", "Value=", "ENDITEM", 
		"Name=columns[54][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[55][data]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][name]", "Value=simpleSearch", "ENDITEM", 
		"Name=columns[55][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[55][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-03T00:00:00Z\\\",\\\"lte\\\":\\\"2020-09-01T23:59:59Z\\\"}\"}", "ENDITEM", 
		"Name=columns[55][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[56][data]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][name]", "Value=dateRangeSearch", "ENDITEM", 
		"Name=columns[56][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[56][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[56][search][value]", "Value=", "ENDITEM", 
		"Name=columns[56][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[57][data]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][name]", "Value=sourceDb", "ENDITEM", 
		"Name=columns[57][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[57][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[57][search][value]", "Value=", "ENDITEM", 
		"Name=columns[57][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[58][data]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][name]", "Value=safetyWFState", "ENDITEM", 
		"Name=columns[58][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[58][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[58][search][value]", "Value=", "ENDITEM", 
		"Name=columns[58][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[59][data]", "Value=centralReceiptDateString", "ENDITEM", 
		"Name=columns[59][name]", "Value=centralReceiptDate", "ENDITEM", 
		"Name=columns[59][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[59][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[59][search][value]", "Value=", "ENDITEM", 
		"Name=columns[59][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[60][data]", "Value=localSubmissionDateString", "ENDITEM", 
		"Name=columns[60][name]", "Value=localSubmissionDate", "ENDITEM", 
		"Name=columns[60][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[60][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[60][search][value]", "Value=", "ENDITEM", 
		"Name=columns[60][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", "ENDITEM", 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", "ENDITEM", 
		"Name=columns[61][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[61][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[61][search][value]", "Value=", "ENDITEM", 
		"Name=columns[61][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[62][data]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][name]", "Value=latestAssignmentComment", "ENDITEM", 
		"Name=columns[62][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[62][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[62][search][value]", "Value=", "ENDITEM", 
		"Name=columns[62][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[63][data]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][name]", "Value=vendor", "ENDITEM", 
		"Name=columns[63][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[63][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[63][search][value]", "Value=", "ENDITEM", 
		"Name=columns[63][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[64][data]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][name]", "Value=replacementRequired", "ENDITEM", 
		"Name=columns[64][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[64][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[64][search][value]", "Value=", "ENDITEM", 
		"Name=columns[64][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[65][data]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][name]", "Value=caseCreatedDate", "ENDITEM", 
		"Name=columns[65][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[65][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[65][search][value]", "Value=", "ENDITEM", 
		"Name=columns[65][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[66][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[66][name]", "Value=reporters.organization", "ENDITEM", 
		"Name=columns[66][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[66][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[66][search][value]", "Value=", "ENDITEM", 
		"Name=columns[66][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[67][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[67][name]", "Value=reporters.department", "ENDITEM", 
		"Name=columns[67][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[67][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[67][search][value]", "Value=", "ENDITEM", 
		"Name=columns[67][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[68][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[68][name]", "Value=reporters.address", "ENDITEM", 
		"Name=columns[68][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[68][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[68][search][value]", "Value=", "ENDITEM", 
		"Name=columns[68][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[69][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[69][name]", "Value=reporters.telephone", "ENDITEM", 
		"Name=columns[69][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[69][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[69][search][value]", "Value=", "ENDITEM", 
		"Name=columns[69][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[70][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[70][name]", "Value=reporters.faxNumber", "ENDITEM", 
		"Name=columns[70][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[70][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[70][search][value]", "Value=", "ENDITEM", 
		"Name=columns[70][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[71][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[71][name]", "Value=reporters.email", "ENDITEM", 
		"Name=columns[71][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[71][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[71][search][value]", "Value=", "ENDITEM", 
		"Name=columns[71][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[72][data]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][name]", "Value=pqcCaseNumber", "ENDITEM", 
		"Name=columns[72][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[72][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[72][search][value]", "Value=", "ENDITEM", 
		"Name=columns[72][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[73][data]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][name]", "Value=returnRequired", "ENDITEM", 
		"Name=columns[73][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[73][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[73][search][value]", "Value=", "ENDITEM", 
		"Name=columns[73][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[74][data]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][name]", "Value=refundRequested", "ENDITEM", 
		"Name=columns[74][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[74][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[74][search][value]", "Value=", "ENDITEM", 
		"Name=columns[74][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[75][data]", "Value=reporters", "ENDITEM", 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", "ENDITEM", 
		"Name=columns[75][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[75][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[75][search][value]", "Value=", "ENDITEM", 
		"Name=columns[75][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[76][data]", "Value=action", "ENDITEM", 
		"Name=columns[76][name]", "Value=", "ENDITEM", 
		"Name=columns[76][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[76][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[76][search][value]", "Value=", "ENDITEM", 
		"Name=columns[76][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=2", "ENDITEM", 
		"Name=order[0][dir]", "Value=desc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=25", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=loadData", "Value=true", "ENDITEM", 
		"LAST");

	web_submit_data("saveState_12", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=data", "Value={\"time\":1598978710714,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true"
		"}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"{UserName}\",\""
		"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}"
		",{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"1,2\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-03T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-09-01T23:59:59Z\\\\\\\"}\\\"}\",\"smart\":true,\"regex\":false,\"caseInsensitive\""
		":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\""
		":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\","
		"\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,3,6,9,21,22,12,2,4,5,7,8,10,11,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", "ENDITEM", 
		"Name=pageType", "Value=intake_queue_form", "ENDITEM", 
		"Name=section", "Value=DataTable", "ENDITEM", 
		"LAST");

	lr_end_transaction("ViewAttachments_IntakeQueueMyCases",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_NavigateToPVAdmin");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Welcome to PV Admin",
		"LAST");

	web_url("10.100.22.34:8083", 
		"URL={PV_Admin_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/intake/queue", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-5a9a6ebac98d25fc12e2e16341f8ab99.json\"");

	web_url("en.json_2", 
		"URL={PV_Admin_URL}/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={PV_Admin_URL}/", 
		"Snapshot=t223.inf", 
		"LAST");

	lr_end_transaction("ViewAttachments_NavigateToPVAdmin",2);

	lr_think_time(3);

	lr_start_transaction("ViewAttachments_Logout");

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("Logout", 
		"URL={PV_Admin_URL}/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PV_Admin_URL}/", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("ViewAttachments_Logout",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\project\\pvi\\scripts\\viewattachments\\\\combined_ViewAttachments.c" 2

