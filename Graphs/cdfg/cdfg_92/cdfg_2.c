#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026560219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, double p_7, signed char p_11, signed char p_13,
                 int p_19)
{
  long v_25;
  float v_23;
  unsigned char v_21;
  char v_17;
  unsigned short v_15;
  unsigned char v_9;
  unsigned short v_5;
  long v;
  unsigned int result;
  v_23 = (float)p;
  v_21 = (unsigned char)40;
  v_17 = (char)52;
  v_15 = (unsigned short)62383;
  v_9 = (unsigned char)p;
  v_5 = (unsigned short)p_11;
  result = 4294936294U;
  if (- ((double)(- v_15) * p_7) < (double)v_5 * p_7) {
    v_5 = (unsigned short)v_17;
    v_5 = (unsigned short)((long)(! v_5) * 33643L << (((1040379132 ^ (int)v_15) << (
                                                       result % 86365612U & 31U)) & 31));
    v_15 = (unsigned short)((unsigned int)((double)(! p_19) + 1.3333088671e+38) * (
                            (unsigned int)p_11 - 4294946226U));
  }
  else {
    v_25 = (long)((unsigned int)((int)v_23 / (p_19 + 502)) * (4294909017U / (
                                                              result + 859U)) - (unsigned int)v_5);
    v_17 = (char)((float)(p * (int)(- v_21)) * - (v_23 * (float)v_25));
    v_15 = (unsigned short)(- p_19);
  }
  if ((unsigned int)(p % (((int)p_11 + (int)p_13) + 487)) / ((499324058U + (unsigned int)p) % (unsigned int)(
                                                             (int)v_15 + 595) + 33U) > (unsigned int)(
      - ((int)v_17 / (p_19 + 658)) / ((p * -549638891) % 60232 + 897))) {
    result = (unsigned int)p;
    result = result;
  }
  else {
    v_5 = (unsigned short)(- (-179572735. * p_7) + (double)(((int)v_5 % (
                                                             (int)v_9 + 591)) % 217));
    v = (long)v_5;
    result = (unsigned int)((long long)(85 % ((int)((signed char)-5218159962.97) + 357)) + 
                            (long long)((long)p % (v + 1006L)) / -65465LL);
  }
  return result;
}


