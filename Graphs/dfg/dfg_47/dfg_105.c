#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409530246
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p)
{
  unsigned short v_11;
  unsigned long long v_9;
  float v_6;
  signed char v_4;
  unsigned long long v;
  unsigned short result;
  v_11 = (unsigned short)35359;
  v_9 = 15600ULL;
  v_6 = (float)p;
  v = 15543ULL;
  v_4 = (signed char)-117;
  result = (unsigned short)((unsigned long long)((int)p * (98 % ((int)p + 844))) - 
                            ((unsigned long long)p * (v_9 - (unsigned long long)v_11)) / 591ULL);
  v = (unsigned long long)(- (- ((int)result / ((int)v_4 + 116)))) - - (
      (v / 1064ULL) % (unsigned long long)(21175 % ((int)((short)v_6) + 343) + 822));
  result = (unsigned short)(! v);
  return result;
}


