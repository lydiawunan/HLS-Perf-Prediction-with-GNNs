#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329540663
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned short p_13)
{
  unsigned long long v_17;
  unsigned long v_15;
  unsigned short v_11;
  char v_8;
  unsigned long v_6;
  signed char v_4;
  short v;
  int result;
  v_17 = 115463296ULL;
  v_15 = 4294908011UL;
  v_11 = (unsigned short)16992;
  v_8 = (char)p_13;
  v_6 = 3857875474UL;
  v_4 = (signed char)-8;
  v = (short)p_13;
  result = (int)p;
  if (p != - v_17 + (18446744073709551505ULL & p)) {
    v_17 = (unsigned long long)(- (9180UL - ((unsigned long)p_13 + v_15)));
    v_11 = (unsigned short)v_8;
    v_8 = (char)(v_6 / 80UL);
  }
  else {
    v_4 = (signed char)(- p_13);
    v_15 = (unsigned long)p_13;
    result = (int)(~ v_11);
  }
  while ((float)((unsigned long long)((unsigned long)((int)v - (int)v_4) * (
                                      v_6 % (unsigned long)((int)v_8 + 143))) % (
                 - (p / (unsigned long long)((int)v_4 + 843)) + 917ULL)) < 
         ((float)((int)v_11 % ((int)p_13 + 950)) - 9.22759217826e+34f) + (float)(
         p - 14215922ULL)) {
    v = v_15 % 15707UL;
    v_8 = (char)(4294953314ULL % (((unsigned long long)p_13 / (v_17 + 667ULL) + (unsigned long long)(! v_6)) + 1012ULL));
    result = (int)(((float)v_17 - 309.078674316f) / ((float)(p / 4294928863ULL) + 640.f));
    v_6 = (unsigned long)p_13 | (3862717894UL + (unsigned long)((long)result % 52328L));
  }
  while_0_break: ;
  return result;
}


