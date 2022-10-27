/**
  **************************************************************************
  * @file    main.c
  * @author  CHAHER KHLIFI
  * @brief   Macros 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
/* Macros --------------------------------------------------------------------*/

//#define INTEL
#define OTHERS
// MACROS functions(SOM, MIN, MUL, MAX)
#define SOM(a,b)  (a+b)
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MUL(a, b) (a*b)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{  //variable declaration
 int a=10, b=20; 
  
  // Define MACRO SOM:
#ifdef SOM 
      int ResultSum = SOM(a,b);
#endif
  // Define MACRO MIN:
#ifdef MIN
      int ResultMin = MIN(a,b);
#endif
     // Define MACRO MUL:
#ifdef MUL
      int ResultMul = MUL(a,b);
#endif
     // Define MACRO MAX:
#ifdef MAX
      int ResultMax = MAX(a,b);
#endif     
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/
