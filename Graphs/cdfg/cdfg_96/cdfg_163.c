#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117810551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, short p_5, unsigned char p_13, unsigned int p_15)
{
  double v_11;
  double v_9;
  signed char v_7;
  unsigned long v;
  short result;
  v_11 = -747.277423075;
  v_7 = (signed char)16;
  v_9 = (double)((unsigned long)(0U - ((unsigned int)p_13 - p_15)) % 4294931109UL);
  if ((int)(- (! v_7)) <= (int)((signed char)(- v_9 / (- (761408526. - v_11) + 942.)))) {
    v = (unsigned long)((int)p * (int)p_5);
    result = (short)(! v);
  }
  else result = (short)p;
  return result;
}


