#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59835555
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned int p_13, unsigned long p_15)
{
  signed char v_19;
  float v_17;
  unsigned short v_11;
  unsigned int v_8;
  long v_6;
  char v_4;
  char v;
  unsigned long result;
  v_19 = (signed char)p_13;
  v_17 = (float)p_15;
  v_11 = (unsigned short)5876;
  v_6 = 732611202L;
  v_4 = (char)p_13;
  v = (char)111;
  v_11 = (unsigned short)(p_15 - (unsigned long)p_13 * (96529078UL % (unsigned long)(
                                                        (int)v_11 + 982)));
  if ((float)((unsigned long)((int)v % ((int)v_11 + 292)) + (unsigned long)p_13 * p_15) * v_17 != (float)(
      ((unsigned int)-3440385091.86 << (p_13 & 31U)) * (unsigned int)v_19)) {
    v = (char)(~ (~ 39280L));
    result = (unsigned long)v;
  }
  else {
    v_8 = 257784419U;
    result = (unsigned long)(- v_8 / 115U - (unsigned int)(- p));
    result = - ((result / (unsigned long)((int)v_4 + 757)) * (unsigned long)(
                v_6 / 409942210L));
  }
  return result;
}


