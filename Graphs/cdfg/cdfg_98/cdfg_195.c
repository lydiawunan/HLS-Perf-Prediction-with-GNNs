#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 258151511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, double p_4[1][3][1], long p_6,
                   unsigned short p_9, unsigned int p_17[2][1])
{
  short v_25;
  int v_23;
  float v_21;
  long long v_19;
  short v_15;
  char v_13;
  unsigned long v_11;
  unsigned short v;
  unsigned short result;
  v_25 = (short)2335;
  v_23 = (int)p_9;
  v_21 = (float)p_17[0][0];
  v_19 = (long long)p_4[0][2][0];
  v_11 = 3537296735UL;
  v = (unsigned short)p_6;
  result = (unsigned short)p;
  while (((unsigned int)result - ~ p_17[0][0]) << (~ v_19 / (long long)(
                                                   (int)v_21 * v_23 + 388) & 31LL) <= (unsigned int)(- (
         -1988 + (int)(- result)))) {
    v_11 = (int)v_25 - -74;
    v = (unsigned short)(! ((int)p_9 | ((int)((unsigned short)p_4[0][0][0]) - (int)v)));
    result = (unsigned short)(((float)result / ((v_21 - (float)p) + 394.f)) / 2724937216.f);
    v_23 = (int)(((v_11 * (unsigned long)p_9) * (unsigned long)(v_23 % -335)) * 10UL);
  }
  while_0_break: ;
  while ((double)(28163ULL / (22ULL * p + 890ULL)) * (4294903702. - p_4[0][1][0] * 56908.) >= (double)(
         191L % (! p_6 % (long)((int)v % ((int)p_9 + 588) + 44) + 988L))) {
    v_15 = (unsigned long long)v_11 + 18446744073709545669ULL;
    v_11 = (unsigned long)v_15;
    v_13 = (char)-107;
    v = (unsigned short)(36123. + ((double)v_13 * p_4[0][1][0]) / ((double)v_11 + 652.));
  }
  while_0_break_0: ;
  return result;
}


