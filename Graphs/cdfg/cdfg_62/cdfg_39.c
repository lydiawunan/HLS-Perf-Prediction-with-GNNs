#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 784563304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, unsigned short p_13[5], char p_19)
{
  signed char v_21;
  signed char v_17;
  unsigned char v_15;
  char v_10;
  int v_8;
  int v_6;
  signed char v_4;
  unsigned int v;
  double result;
  v_21 = (signed char)p;
  v_17 = (signed char)p_13[4];
  v_15 = (unsigned char)93;
  v_10 = (char)0;
  v_6 = (int)p_13[4];
  v_4 = (signed char)p;
  if ((unsigned long long)((unsigned int)(((int)p - (int)p) % ((int)v_15 * (int)v_17 + 638)) % (
                           (unsigned int)((int)p_13[0] + (int)p_19) / (
                           (unsigned int)v_6 % 423736548U + 428U) + 185U)) < 
      63662ULL / ((15529ULL - (unsigned long long)((int)v_15 % ((int)v_21 + 827))) + 270ULL)) {
    v_8 = (int)v_10;
    v = (unsigned int)v_8;
    v_6 = 49362;
  }
  else {
    v_4 = (signed char)p_13[1];
    v_6 = (int)(-322360395LL + (long long)p);
    v = 22257387U;
  }
  result = (double)((long long)(~ v & (unsigned int)((int)v_4 + (int)v_4)) + - (
                    (long long)v_6 * 953033041LL));
  return result;
}


