#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695695621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, double p_4, unsigned short p_6, short p_8, double p_10)
{
  double v_21;
  unsigned int v_19;
  short v_17;
  signed char v_15;
  long v_13;
  unsigned long long v;
  long long result;
  v_21 = (double)p_8;
  v_17 = (short)-17477;
  v_15 = (signed char)-10;
  v_13 = 45084L;
  v = 18446744072707800582ULL;
  while (56034ULL % ((unsigned long long)(- p_10) * (v - (unsigned long long)v_13) + 598ULL) < (unsigned long long)(
         ~ (7110 << ((int)p & 15)) + (int)((double)v_15 * - p_10))) {
    v_17 = (int)v_17 % 745474034;
    v_19 = (unsigned int)((long long)(522290086U / ((unsigned int)v_21 + 190U)) * -23204LL + (long long)(- v_21));
    v_13 = 41777L;
    v_15 = (signed char)((unsigned long)((long)p * -39997L) & (unsigned long)(- v_19));
  }
  while_0_break: ;
  if (254ULL == (unsigned long long)((int)p / ((int)((short)p_4) + 131) + (int)p_6) / (
                ((unsigned long long)((int)p_8 * (int)((short)p_10)) & v) + 954ULL)) 
    result = (long long)p;
  else result = (long long)(1.84467440737e+19 + p_4);
  return result;
}


