#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647175937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, short p_5, int p_11,
                       signed char p_13, unsigned long p_21)
{
  long long v_19;
  unsigned char v_17;
  short v_15;
  short v_9;
  unsigned short v_7;
  unsigned char v;
  unsigned long long result;
  v_17 = (unsigned char)p_11;
  v_15 = (short)-22592;
  v_19 = ((long long)v_15 * 41858LL - (long long)((int)p_13 + 37038)) ^ 63599LL;
  if ((long long)(~ v_15) > ((long long)(~ (-864927008 % ((int)v_17 + 544))) ^ - (
                             v_19 / (long long)(p_21 + 346UL)))) {
    v = (unsigned char)((long)((int)p + (int)((unsigned short)-925.972907455)) & 
                        (long)(~ p_5) % -146099432L);
    result = (unsigned long long)v;
  }
  else {
    v_9 = (short)p_13;
    v_7 = (unsigned short)0;
    result = (unsigned long long)(- ((float)v_7 / -299245152.f) * (float)v_9);
  }
  return result;
}


