#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 352558031
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, char p_5, int p_7, long p_11, double p_15[5])
{
  char v_23;
  unsigned long v_21;
  float v_19;
  short v_17;
  unsigned int v_13;
  float v_9;
  unsigned short v;
  unsigned char result;
  v_23 = (char)p;
  v_21 = (unsigned long)p_5;
  v_19 = (float)p_7;
  v_17 = (short)p;
  v_13 = (unsigned int)p_15[2];
  v_9 = (float)p_11;
  while (p_11 + (long)((v_19 / -1317.f) * (float)(27226 % ((int)((short)v_19) + 698))) <= (long)p_5) {
    v_21 = (unsigned long long)v_21 - 18446744073709524381ULL;
    v_17 = (short)((unsigned long)(! p_11 << ((long)(2.34396729867e+38 + (double)p_11) & 31L)) & (unsigned long)(
                   (31292U % ((unsigned int)p_15[2] + 879U)) / (unsigned int)(
                   ((int)p_5 - (int)((char)p_15[1])) + 353)));
    v_13 = (unsigned int)(((long long)v_23 + ((long long)p_7 + 683558253LL)) / (long long)(
                          ((-90840635L | p_11) << (- p & 31)) + 652L));
    v_19 = (float)((4389373128ULL + (unsigned long long)((int)p_5 + p_7)) << (
                   (unsigned long long)(p_15[2] / 23229.) & 63ULL));
  }
  while_0_break: ;
  if ((float)((unsigned long)(-863.170593262f * v_9) % ((((unsigned long)p_11 - (unsigned long)v_13) - (unsigned long)(
                                                         p_15[3] / 38821.)) + 989UL)) <= 
      (float)v_17 + v_19) {
    result = (unsigned char)p;
    result = result;
  }
  else {
    v = (unsigned short)(~ ((int)p_5 % (p_7 + 362)) * ~ (~ p));
    result = (unsigned char)((int)v - 19);
  }
  return result;
}


