#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 620553530
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p[2], signed char p_5, unsigned short p_7,
                   unsigned short p_15, int p_17)
{
  unsigned short v_23;
  unsigned long v_21;
  int v_19;
  short v_13;
  unsigned short v_11;
  unsigned long long v_9;
  char v;
  unsigned short result;
  v_23 = p_15;
  v_21 = 4294911417UL;
  v_19 = (int)p_5;
  v_11 = p_15;
  v_9 = (unsigned long long)p_7;
  if (0LL <= 0 / (long long)((int)p[0] + 560)) {
    v_19 = ! (((int)p_5 & v_19) * ! p_17);
    v_13 = (short)v_19;
    v_11 = (unsigned short)14879;
  }
  else {
    v_13 = (short)(~ v_21);
    v_9 = 4143742686ULL;
    v_9 = (v_9 + (unsigned long long)p_17) / (unsigned long long)((unsigned int)p[1] % 3563966865U + 247U) | (unsigned long long)(- (
          (int)p_15 % ((int)p_5 + 913)));
  }
  if ((v_9 % 18446744073709551504ULL ^ (unsigned long long)((int)v_11 + (int)v_13)) * (
      (unsigned long long)((int)p_15 % (p_17 + 57)) * (42566ULL % (unsigned long long)(
                                                       p_17 + 674))) != (unsigned long long)(! p_17)) 
    result = p[1];
  else {
    v = (char)(! (- (125 + (int)p_7)));
    result = (unsigned short)(- ((unsigned long long)(- v) / ((58331ULL + (unsigned long long)p_5) + 586ULL)));
    result = (unsigned short)0;
  }
  return result;
}


