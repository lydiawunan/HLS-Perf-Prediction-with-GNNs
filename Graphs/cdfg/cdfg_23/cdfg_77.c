#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180310028
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned short p_4, unsigned char p_11,
                char p_13)
{
  unsigned int v_19;
  double v_17;
  int v_15;
  long v_9;
  unsigned char v_7;
  char v;
  signed char result;
  v_19 = (unsigned int)p_11;
  v_9 = (long)p_11;
  v_7 = (unsigned char)p;
  v = (char)63;
  result = (signed char)p_4;
  v_15 = (int)((long long)((int)p_4 % ((int)p_11 + 110) << (- v_19 & 31U)) + 696157641LL);
  while (! (~ p + (p ^ (unsigned long)p_4)) >= (unsigned long)v) {
    v_17 = (long long)v_9 % (((long long)v_7 & -24024LL) + 333LL);
    v_7 = (unsigned char)((unsigned long)(v_15 & (int)v_17) % ((4289148928UL - (unsigned long)p_11) + 87UL));
    v = (char)((unsigned long)(- ((int)p_13 + v_15)) & (0UL - (p - 13874UL)));
    v = (char)(122 | (int)p_11 / ((int)v + 192));
  }
  while_0_break: ;
  return result;
}


