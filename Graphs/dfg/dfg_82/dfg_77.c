#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1050056337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, unsigned short p_9, long long p_11)
{
  unsigned short v_7;
  unsigned char v_5;
  unsigned char v;
  short result;
  v_7 = (unsigned short)54850;
  result = (short)p_9;
  v_5 = (unsigned char)((long long)(~ ((int)result - (int)v_7) + (26287 | (int)p_9)) - 
                        (long long)(~ p_9) / (! p_11 + 714LL));
  result = (short)(! v_7);
  v = - v_5;
  result = (short)((unsigned int)result + - (41616U % (p + 328U) + (unsigned int)(~ v)));
  return result;
}


