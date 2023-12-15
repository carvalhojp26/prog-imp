//DataTypes
typedef struct {
    	int day;
    	int month;
    	int year;
} Date;

typedef struct {
	int ID;
	char name[50];
	int phoneNumber;
} Patients;

typedef struct {
	int ID;
	Date date;
	char meal[50];
	char food[50];
	int calories;
} Diet;

typedef struct {
	int ID;
	Date date;
	char meal[50];
	int minCal;
	int maxCal;
} MealPlan;

typedef enum {
    PATIENTS,
    DIET,
    MEAL_PLAN
} FileType;

//Funcoes 
int readFile(char *path, void *data, int max_size, FileType fileType);