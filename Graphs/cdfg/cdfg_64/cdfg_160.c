#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 752799023
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, double p_4[1], signed char p_7,
                  short p_11, long long p_13)
{
  unsigned short v_17;
  long long v_15;
  char v_9;
  unsigned short v;
  unsigned char result;
  v_17 = (unsigned short)2752;
  v_15 = 60832LL;
  if (! (p_13 % 775644375LL) % ((v_15 & (long long)p) / 969LL + 1006LL) > (long long)(
      ((int)((short)p_4[0]) | (int)p_11) / ((int)v_17 + 322))) v = (unsigned short)p_7;
  else {
    v_9 = (char)(p_13 % 20840LL);
    v = (unsigned short)(- (((int)p - (int)v_9) * (int)p_11));
  }
  if (0LL != (long long)v) result = (unsigned char)(- ((float)p / -1702136832.f));
  else result = (unsigned char)((unsigned int)(- (- p_4[0])) % 3245472013U);
  return result;
}


