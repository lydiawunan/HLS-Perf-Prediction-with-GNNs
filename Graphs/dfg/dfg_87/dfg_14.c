#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 880294160
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, int p_7, float p_13, char p_15[1][1],
          unsigned long long p_17)
{
  unsigned char v_11;
  unsigned short v_9;
  short v_5;
  unsigned long v;
  short result;
  v_11 = (unsigned char)p_17;
  v_5 = (short)p_7;
  v_9 = (unsigned short)(((float)(3966409053ULL / (- p_17 + 399ULL)) - - (
                          941.967285156f * (float)v_5)) - (4294928128.f + 
                                                           (p / 595836352.f) * 84056696.f));
  v = (unsigned long)(~ (((int)v_11 + (int)((unsigned char)p_13)) % (
                         (int)5851579241.39 / (p_7 + 823) + 115)) & (int)(- p_15[0][0]));
  v_5 = (short)((long)(p + (float)((-26733 % (p_7 + 372)) * (int)v_9)) % 58907L);
  result = (short)(64UL / (((unsigned long)(p / 449.f) >> (v % ((unsigned long)v_5 % 4294965247UL + 722UL) & 31UL)) + 881UL));
  return result;
}


