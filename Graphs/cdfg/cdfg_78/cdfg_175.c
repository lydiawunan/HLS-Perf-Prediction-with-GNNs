#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 416146715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, double p_7, float p_9,
                   long p_11[5][1][4], unsigned long long p_17[5][3][5])
{
  short v_27;
  unsigned short v_25;
  long v_23;
  long v_21;
  unsigned long v_19;
  long v_15;
  int v_13;
  int v_5;
  char v;
  unsigned short result;
  v_27 = (short)p_17[4][2][2];
  v_23 = (long)p_9;
  v_21 = -585857255L;
  v_15 = (long)p;
  v_13 = (int)p;
  result = (unsigned short)p_17[0][0][1];
  if (p_17[3][2][1] >= (unsigned long long)((int)(- p_7 / ((double)((long)result % (
                                                                    v_21 + 82L)) + 213.)) - 
                                            (v_13 % 167) / (~ v_13 + 920))) {
    v_19 = (unsigned long)p;
    v_13 = (int)(((v_21 + -19556L) | (long)((int)p % 8226)) * (long)-2.60573336898e+38);
    v_15 = (long)(-100757791LL / (long long)(v_19 + 1006UL));
  }
  else {
    v_25 = (unsigned short)((long long)((long)p % (v_15 + 292L) + (long)(
                                        p_9 + -64959.f)) ^ ((long long)result + -482659945LL));
    v_13 = (int)(~ ((v_23 / (long)((int)v_25 + 451)) / ((-838082269L ^ (long)v_27) + 651L)));
    v_15 = (long)(-77 | (int)((signed char)-214.406460624));
  }
  if (295798597ULL < (unsigned long long)(-19386LL >> (((unsigned long long)(- v_15) + 
                                                        p_17[1][1][3] / 27428ULL) & 63ULL))) {
    v_5 = v_13;
    v = (char)((3851LL + (long long)p_9) & (long long)p_11[0][0][3]);
    result = (unsigned short)((double)((-4410716160.f + (float)v) / (
                                       (float)(- p) + 818.f)) * (((double)v_5 + p_7) / (double)(
                                                                 p_9 + 842.f)));
  }
  else result = (unsigned short)0;
  return result;
}


