#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 137872960
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, int p_7, float p_11, signed char p_13[1],
         long p_15[5][5][5])
{
  long long v_25;
  short v_23;
  unsigned char v_21;
  unsigned char v_19;
  unsigned long long v_17;
  signed char v_9;
  short v_4;
  float v;
  char result;
  v_25 = (long long)p_11;
  v_21 = (unsigned char)202;
  v_19 = (unsigned char)165;
  v_17 = 104396135ULL;
  v_4 = (short)-16099;
  v = 2.89715054311e+38f;
  result = (char)p_15[1][4][3];
  while ((int)v_19 != (int)((unsigned char)(-380.569671631f * (float)(- (
                                            v_17 + (unsigned long long)p_13[0]))))) {
    v_23 = (long long)v_21 & 211924708LL;
    v_21 = (unsigned char)((unsigned long long)((int)p_13[0] * (int)((signed char)p_11) & 50858) - (
                           (unsigned long long)((unsigned long)v_23 & 21369UL) + 
                           (unsigned long long)v_25 % 52360ULL));
    v_4 = (short)(~ (-13260L * ! p_15[0][4][0]));
    v_17 = 43416ULL;
  }
  while_0_break: ;
  if ((unsigned long long)((long long)(- p_15[2][4][2]) - (-122722365LL + (long long)(
                                                           v * -937054592.f))) <= (
      18446744073709538182ULL / (v_17 % (v_17 + 233ULL) + 211ULL) | (unsigned long long)(- (
      (int)p_13[0] % ((int)v_19 + 727))))) {
    v_9 = (signed char)-15;
    v = (float)(- ((unsigned long)p + 3720723769UL) / (unsigned long)(
                -29023 / ((int)v_9 / ((int)((signed char)p_11) + 525) + 890) + 289));
    result = (char)((unsigned int)(((int)result - (int)((char)v)) * (int)(! v_4)) * (
                    p - (unsigned int)(- p_7)));
  }
  else result = (char)(-205332220);
  return result;
}


