#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 395949681
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long p_15, short p_17)
{
  unsigned int v_13;
  double v_11;
  short v_9;
  unsigned int v_7;
  double v_5;
  char v;
  signed char result;
  v_13 = 1925U;
  v_11 = p;
  v_9 = p_17;
  v_7 = (unsigned int)p;
  v_5 = (double)p_15;
  v = (char)111;
  result = (signed char)64;
  if (p_15 < 61242UL * (unsigned long)((int)p_17 ^ (int)result) - (unsigned long)(- (- v_7))) {
    result = (signed char)(~ (((unsigned int)v_9 / (v_7 + 572U)) * 39577U));
    v_9 = (short)((int)((unsigned short)(- (- v_5))) - 7537);
    v = (char)((unsigned long)(- (~ v_13)) | ~ ((unsigned long)p / 4282883436UL));
  }
  else {
    result = (signed char)p_15;
    v_7 = (unsigned int)2.6190823012e+38;
    v_9 = (short)((int)((signed char)(- p)));
  }
  while ((int)-2.83071287374e+38f < ! ((int)v & 26 % ((int)((signed char)p) + 623))) {
    v_5 = (int)v_9 << (v_7 % ((unsigned int)(v_5 * 59553.) + 571U) & 15U);
    v_7 = (unsigned int)(~ 95270508);
    result = (signed char)v_11;
    v = (char)(- (~ (~ 4107778333U)));
  }
  while_0_break: ;
  return result;
}


