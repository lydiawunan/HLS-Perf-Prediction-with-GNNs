#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360894004
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned long p_4, unsigned short p_7[3][3],
                  long long p_13, char p_19)
{
  unsigned long v_23;
  char v_21;
  long v_17;
  int v_15;
  unsigned short v_11;
  short v_9;
  unsigned short v;
  unsigned long result;
  v_23 = (unsigned long)p_7[2][0];
  v_21 = (char)p_4;
  v_17 = 176512095L;
  v_15 = -322384908;
  v_9 = (short)-4877;
  if ((long long)(((unsigned long)v_21 / (v_23 + 813UL)) % (unsigned long)(
                  ((int)p_19 ^ v_15) + 1011)) / (((long long)((int)p_19 + (int)v_9) + 
                                                  -193LL * p_13) + 416LL) != 0LL) {
    v_11 = (unsigned short)(- p_13);
    v = v_11;
    v_9 = (short)3.1175101989e+38;
  }
  else {
    v_15 = (int)p;
    result = (unsigned long)(! ((long long)((int)v_9 - 11) * ~ p));
    v = (unsigned short)(((4294918506UL + (unsigned long)v_15) + 4294967232UL) - 
                         (result % (unsigned long)(v_17 + 739L)) * ((unsigned long)p_19 * p_4));
  }
  if ((long)(! ((int)(- v_9) + -987990846)) < 62291L) result = (unsigned long)p;
  else {
    result = (unsigned long)p_7[2][1];
    v = (unsigned short)(((long long)(~ result) + p % (long long)(result + 810UL)) ^ 
                         (long long)v * ((long long)v & p));
    result = p_4 & 3743228690UL % ((result - (unsigned long)v) + 314UL);
  }
  return result;
}


