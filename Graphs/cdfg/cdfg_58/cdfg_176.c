#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 758462115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p[2], unsigned int p_4, float p_6[2][2][1],
                   long p_13)
{
  short v_15;
  unsigned char v_11;
  unsigned short v_9;
  unsigned short v;
  unsigned short result;
  v = (unsigned short)57038;
  result = (unsigned short)p_4;
  v_15 = (short)((float)p[0] / (- p_6[1][1][0] + 447.f));
  while ((float)((unsigned long long)(p[0] * p[1] - 4294945590U) % ((unsigned long long)(
                                                                    p[1] + 4294967205U) % 492830703ULL + 800ULL)) == 
         (float)((unsigned int)(~ result) % (~ p_4 + 50U)) - p_6[1][1][0]) {
    v_9 = (unsigned short)0;
    v_11 = (unsigned char)v;
    result = (unsigned short)((unsigned int)(~ ((int)v_9 % ((int)((unsigned short)-9289096280.24) + 70))) ^ (
                              (4294916782U - p_4) - (unsigned int)(- v_11)));
  }
  while_0_break: ;
  return result;
}


