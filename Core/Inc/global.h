#ifndef __GLOBAL_H_
#define __GLOBAL_H_


#define RED_INIT		8
#define YELLOW_INIT		3
#define GREEN_INIT		5

void LedTimeDurationInit();
extern int mode;
extern int red_value, yellow_value, green_value;
extern int red_draft, yellow_draft, green_draft;

#endif /* INC_GLOBAL_H_ */
