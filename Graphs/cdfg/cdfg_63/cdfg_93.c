#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 123646733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, char p_4, unsigned short p_6,
                unsigned short p_11, int p_13)
{
  unsigned short v_17;
  unsigned short v_15;
  unsigned long v_9;
  unsigned long v;
  signed char result;
  v_17 = (unsigned short)p_13;
  v_15 = (unsigned short)52879;
  if (! ((int)v_15 - (int)p_4 * 42531) == (int)v_17) {
    v_9 = (unsigned long)-665.741882324f;
    v = (unsigned long)(- (p * (unsigned int)(! p_4)));
  }
  else {
    v = (unsigned long)(((unsigned int)(42490 + (int)((unsigned short)-7797688412.36)) - 3816601297U) / 88U);
    v_9 = v;
    v = (unsigned long)p_6;
  }
  if (! (v + v_9) - (unsigned long)((int)(! p_11) - p_13 * (int)p_11) <= (unsigned long)(- (- (
      (int)((char)-1368197760.f) * (int)p_4)))) result = (signed char)(
                                                (unsigned int)((int)-7249888234.39) * (
                                                (13U + p) | (unsigned int)(
                                                214 + (int)p_4)));
  else result = (signed char)(! p_6);
  return result;
}


