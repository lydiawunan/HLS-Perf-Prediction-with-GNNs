#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847451642
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p)
{
  unsigned long long v_17;
  unsigned long long v_15;
  short v_12;
  int v_10;
  char v_8;
  unsigned long v_6;
  float v_4;
  signed char v;
  unsigned long long result;
  v_17 = (unsigned long long)p;
  v_15 = (unsigned long long)p;
  v_12 = (short)-23781;
  v_10 = p;
  v_8 = (char)p;
  v_6 = (unsigned long)p;
  v_4 = (float)p;
  v = (signed char)p;
  result = 18446744072951530750ULL;
  while ((- p % 140) / (((int)(~ v_8) << ((int)(~ v_12) & 7)) + 320) >= p) {
    v_10 = v_15 % 18446744073709514928ULL;
    v = (signed char)(- (4294967208UL % ((unsigned long)p % 4294918148UL + 97UL)));
    v_8 = (char)210.397754742;
    v_12 = (short)(! v_17);
  }
  while_0_break: ;
  while ((long long)((int)(! (~ v)) * (int)((signed char)(v_4 + 0.f))) <= 
         416272672LL + (long long)(((unsigned long)v_4 + v_6) << 12ULL)) {
    v_10 /= (int)v_8 * -74 + 385;
    v = (signed char)108;
    v_4 = (float)p;
    v_6 = (unsigned long)(- v_12);
  }
  while_0_break_0: ;
  return result;
}


