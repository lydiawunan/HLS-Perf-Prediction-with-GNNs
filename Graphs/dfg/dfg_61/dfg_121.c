#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 309649236
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, float p_5[5], unsigned short p_9,
                  char p_11[5][4][2], unsigned char p_13[2][2])
{
  long long v_7;
  int v;
  unsigned char result;
  result = (unsigned char)p_11[3][0][0];
  v_7 = (long long)((int)p_11[0][1][1] - (int)p_13[0][1]);
  v = (int)p;
  v = (int)((long long)((unsigned long)((float)(60223ULL & (unsigned long long)p) - - p_5[1]) % (
                        ((unsigned long)(-39 / ((int)result + 45)) - 
                         (unsigned long)v % 3240910890UL) + 40UL)) % (
            ((-46LL + v_7) + (long long)(- p_9)) / 100LL + 183LL));
  result = (unsigned char)(~ v);
  return result;
}


