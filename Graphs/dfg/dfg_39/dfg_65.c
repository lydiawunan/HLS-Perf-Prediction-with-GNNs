#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 273160022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p[1], long long p_5, unsigned short p_11)
{
  int v_13;
  short v_9;
  int v_7;
  unsigned char v;
  float result;
  v_13 = (int)p_5;
  v_9 = (short)(- v_13);
  v_7 = (int)(! (! ((unsigned int)((int)p_11 / ((int)p_11 + 234)) % 4201545744U)));
  v = (unsigned char)(1 + (! (v_7 + 123) - ((int)v_9 & v_7 % -100)));
  result = (float)((long long)((unsigned long)v - (unsigned long)((int)p[0] | (int)((short)-7793357312.f)) / 225299829UL) / (
                   p_5 + 395LL));
  return result;
}


