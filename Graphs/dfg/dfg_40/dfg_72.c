#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468363299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p)
{
  int v_10;
  int v_8;
  signed char v_6;
  unsigned int v_4;
  long long v;
  signed char result;
  v_10 = 991435106;
  v_8 = (int)p;
  v_6 = (signed char)p;
  v = (long long)(- ((int)p * (64939 + (17 + (int)p))));
  v_6 = (signed char)(4294906359U / (unsigned int)((int)v_6 % -65193 + 139));
  v_4 = (unsigned int)(~ ((long long)v_8 / (-823892615LL % (long long)(
                                            - v_10 + 638) + 286LL)));
  result = (signed char)(41225LL + (v ^ (long long)v_4 * ((long long)v_6 - v)));
  return result;
}


