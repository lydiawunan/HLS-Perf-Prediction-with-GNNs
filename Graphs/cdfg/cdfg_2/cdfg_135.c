#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 20488878
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, char p_7, short p_9, unsigned short p_11)
{
  float v_13;
  unsigned long v_5;
  int v;
  char result;
  v_13 = -3.36177795407e+38f;
  v = (int)p_9;
  result = (char)44;
  v_5 = 8653UL;
  if (4294930176.f != (float)(! (! p_11)) / ((15799.f + v_13) * (float)(~ v) + 583.f)) {
    v = (int)((unsigned long long)(- p) % (((unsigned long long)(! result) | 54004ULL) + 623ULL));
    result = (char)(- ((unsigned long)v - (v_5 + (unsigned long)p_7)));
    result = (char)((unsigned long long)(((int)p % ((int)result + 748)) % (
                                         (int)(- result) + 760)) - 21771ULL);
  }
  else result = (char)-74;
  return result;
}


