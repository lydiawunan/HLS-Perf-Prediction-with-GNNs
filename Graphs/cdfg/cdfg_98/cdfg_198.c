#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228444458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, unsigned int p_5[3][1], double p_7,
                  unsigned short p_9, unsigned long long p_11)
{
  long v_21;
  int v_19;
  char v_17;
  unsigned int v_15;
  short v_13;
  char v;
  unsigned char result;
  v_21 = (long)p;
  v_17 = (char)p_5[1][0];
  v_15 = (unsigned int)p;
  v_13 = (short)1584;
  v_19 = (int)v_21;
  if ((double)(- p) / ((p_7 + (double)v_13) + 397.) + (double)(~ v_15 / (unsigned int)(
                                                               (int)v_17 + 67)) == (double)(
      (unsigned int)(- v_19 + (int)-3.30869454599e+38) ^ ((unsigned int)(- p_7) + p_5[1][0]))) 
    result = (unsigned char)p;
  else {
    v = (char)90;
    result = (unsigned char)p_9;
    result = (unsigned char)(((long long)((unsigned int)v / (p_5[0][0] + 233U)) & -61276LL) ^ (long long)(
                             (double)((int)result) + p_7));
  }
  return result;
}


