#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656581068
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[3][5], long p_9, double p_13, unsigned short p_17,
          float p_19)
{
  unsigned short v_21;
  char v_15;
  int v_11;
  int v_7;
  char v_5;
  float v;
  float result;
  v_21 = (unsigned short)p[1][2];
  v_15 = (char)-93;
  v_7 = 400705937;
  v_5 = (char)p[1][4];
  v = (float)p[1][3];
  result = (float)p[2][3];
  if ((18446744073254303593ULL + (unsigned long long)v_5) * (unsigned long long)(
      p_19 + 51521.f) - (unsigned long long)(101 * (int)((char)(- v))) == 
      45004ULL * (unsigned long long)v_21 - (unsigned long long)p[1][3]) {
    v_15 = (char)(~ ((int)((unsigned short)(p_19 - (float)p_17)) ^ (int)(! p_17)));
    v_5 = (char)p_17;
    v = (float)((unsigned long)(! v_5) & p[1][2]);
  }
  else {
    v_5 = (char)0;
    v = (float)p[1][1];
    v_7 = (int)(~ ((unsigned long)p_13 * p[1][1]) - 289381968UL);
  }
  while ((unsigned long)(- ((double)(- v) * ((double)v + -9.30261131649e+37))) <= 
         p[1][2] - (unsigned long)(~ v_5)) {
    v_11 = (int)((double)((unsigned long)(-16674L % (p_9 + 759L)) * (unsigned long)(
                          4294940054U % ((unsigned int)p_13 + 95U))) / (
                 (p_13 * -44241.) * (double)((unsigned long long)v_15 - 18446744073709523212ULL) + 674.));
    v_5 = (char)(((unsigned long)(p_9 % (long)(v_7 + 340)) % (! p[1][2] + 893UL)) / 432UL);
    v = (float)(((-39763L - p_9) * (long)v_7) % (long)(v_11 + 839));
  }
  while_0_break: ;
  return result;
}


