#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 189427088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned long long p_4[5][5][2], unsigned long p_6,
         unsigned int p_8, double p_10)
{
  short v_21;
  long long v_19;
  unsigned long long v_17;
  double v_15;
  long long v_13;
  unsigned char v;
  long result;
  v_21 = (short)-17610;
  v_19 = (long long)p_6;
  v_17 = (unsigned long long)p;
  v_15 = (double)p;
  v_13 = 20639LL;
  v = (unsigned char)p_10;
  while ((unsigned long long)(- (-428 * ((int)v | (int)((unsigned char)v_15)))) <= 
         ((unsigned long long)((unsigned int)8.71415835449e+37 - p_8) + p_4[0][0][1]) % (unsigned long long)(
         (2480U << (v_17 * (unsigned long long)v_19 & 31ULL)) + 203U)) {
    v_15 = (double)v_21 * 7035457940.19;
    v_13 = (long long)p_8;
    v = (unsigned char)((unsigned long)(- p) / (- (! p_6) + 783UL));
    v_19 = (long long)(~ (~ (short)-11805));
  }
  while_0_break: ;
  if ((double)((long long)(- p_10 + 177.) | ((long long)p_8 + 95015506LL) % (
                                            ((long long)v - v_13) + 177LL)) >= 2.24566470234e+38) 
    result = (long)(((unsigned long long)p + (97ULL - p_4[4][0][0])) + (
                    p_4[2][2][0] % 4294961208ULL + (unsigned long long)(~ p_6)));
  else result = (long)p_8;
  return result;
}


