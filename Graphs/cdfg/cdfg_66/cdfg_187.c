#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 968135050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned long long p_9, double p_13,
                   unsigned long p_15, unsigned char p_19)
{
  signed char v_25;
  unsigned int v_23;
  unsigned int v_21;
  int v_17;
  char v_11;
  double v_7;
  unsigned char v_5;
  signed char v;
  unsigned short result;
  v_25 = (signed char)p_9;
  v_23 = 562200909U;
  v_21 = 4034981956U;
  v_17 = -103;
  v_11 = (char)p_9;
  v_7 = 2.22263948775e+38;
  v_5 = (unsigned char)p_15;
  v = (signed char)56;
  while ((unsigned long)(- (! ((int)p * (int)p))) != (unsigned long)8.04114636436e+37f * (
                                                     (unsigned long)v % (
                                                     (unsigned long)p / 4294936285UL + 638UL))) {
    result = (float)v_21 - 2180482048.f;
    v_5 = (unsigned char)((int)((char)(((double)v_23 - 934.564639247) * (
                                       p_13 + (double)v_25))) & -32);
    v_21 = ! 556872425U;
    v = (signed char)(~ ((int)v_11 & (int)p) * - ((int)result >> 15));
  }
  while_0_break: ;
  if ((unsigned long)v_17 < (((p_15 ^ 37UL) - (unsigned long)(- p_19)) | 
                             (unsigned long)(19684. + v_7) % 1672UL)) {
    result = (unsigned short)((((unsigned long long)v_7 & p_9) & (unsigned long long)(- p)) - (unsigned long long)(- (
                              (int)v_11 * (int)((char)p_13))));
    v = (signed char)v_5;
    result = (unsigned short)(! ((int)p % ((int)result + 783)) * ~ ((int)v + (int)((signed char)-8.98119599173e+37f)));
  }
  else result = (unsigned short)p_15;
  return result;
}


