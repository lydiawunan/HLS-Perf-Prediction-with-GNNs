//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117265191
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, int p_11, signed char p_15)
{
  char v_13;
  unsigned long long v_8;
  signed char v_6;
  unsigned long long v_4;
  unsigned long v;
  float result;
  v_13 = (char)p;
  v = (unsigned long)p_15;
  v_6 = (signed char)(~ ((int)p_15 % 228));
  v_8 = (unsigned long long)p;
  v_4 = (unsigned long long)v_13;
  result = (float)(((unsigned long long)v % (v_4 + 53ULL) | (unsigned long long)(~ v_6)) & (unsigned long long)(
                   ((unsigned long)(~ p) / 4294907501UL) / (unsigned long)(
                   p_11 + 354)));
  return result;
}


