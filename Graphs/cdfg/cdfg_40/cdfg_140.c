#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 561871480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, char p_7, short p_9, float p_11[2],
          unsigned short p_13)
{
  unsigned char v_21;
  long long v_19;
  unsigned short v_17;
  int v_15;
  unsigned long v_5;
  unsigned int v;
  float result;
  v_21 = (unsigned char)182;
  v_19 = (long long)p;
  v_17 = (unsigned short)30866;
  v_5 = (unsigned long)p_13;
  v = 64640U;
  if (0 == (int)v_21 * (int)((unsigned char)(- (p_11[1] + (float)p_13)))) {
    v_15 = (int)p_7 - (int)(~ p_13) * (int)((unsigned short)(519.114885999 / (
                                                             (double)v + 345.)));
    result = (float)(- ((long long)(~ v_5) & (long long)v * v_19));
    result = (float)((long)(((int)((unsigned char)p_11[0]) + 179) * (int)(
                            -874130432.f * result)) + ((long)p_13 + (long)v_17 % -1034668187L));
  }
  else {
    result = (float)(! (59694LL * v_19) + (long long)(~ p_7));
    v_15 = (int)((long)((24572.f - p_11[0]) + (p_11[0] + result)));
    result = (float)((int)((unsigned short)(result + (-986.249023438f + result))) % (
                     (int)p_13 + 194));
  }
  if (4294967295UL > (35433UL << (-849228214LL % (long long)((int)p_7 + 659) & 31LL)) + (
                     3812060579UL * (unsigned long)v_15 >> ((unsigned long)(
                                                            result + 533472288.f) & 31UL))) {
    v_5 = 2378UL;
    v = (unsigned int)((unsigned long long)v_5 * 18369614521007611969ULL);
    result = (float)(~ (v % (p + 616U)));
  }
  else result = (float)((unsigned long)((unsigned int)(23588 ^ (int)p_7) & (
                                        (unsigned int)p_9 + p)) - (unsigned long)p_11[0] / 447050UL);
  return result;
}


