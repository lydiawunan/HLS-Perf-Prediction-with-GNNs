#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1054087048
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, char p_11, long p_13)
{
  char v_17;
  unsigned int v_15;
  unsigned long v_9;
  unsigned short v_7;
  char v_5;
  double v;
  float result;
  v_17 = p_11;
  v_15 = 28038U;
  v_9 = 3252946959UL;
  v = -703.284209715;
  result = -485.858032227f;
  if ((((unsigned long)(p_13 - 31239L) + (3243521673UL - (unsigned long)p_13)) ^ 
       (unsigned long)(v_15 & (unsigned int)result) * ((unsigned long)v_17 + v_9)) < (unsigned long)(- p_13)) 
    v = (double)p;
  else {
    v_7 = (unsigned short)(3.95354382008e+13f / ((result - (float)v_9) + 490.f) + (float)(
                           99 & (int)p_11));
    v_5 = (char)((double)(~ (p + (int)v)) / ((-154.585953123 - (double)p) / (
                                             (double)(! v_7) + 1007.) + 972.));
    v = (double)(! (- (- v_5)));
  }
  result = (float)v;
  return result;
}


