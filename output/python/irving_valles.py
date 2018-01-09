use std::io::prelude::*;
use std::io::BufReader;
use std::fs::File;

fn main(){
    let f = File::open("rosalind_ba1a.txt")
        .ok()
        .expect("FILE DNE");
    let mut reader = BufReader::new(f);
    let mut text = String::new();
    let mut pattern = String::new();

    //read a line into buffer
    reader.read_line(&mut text)
        .ok()
        .expect("buff not written");

    //read a line into buffer
    reader.read_line(&mut pattern)
        .ok()
        .expect("buff not written");
    let pos = pattern.len()-1;
    pattern.remove(pos);
    
//file loaded.
    let mut count = 0;
    let mut i = 0;
    let mut j = 0;
    let k = pattern.len();
    let length = text.len();
    while j+k < length {
        let candidate = &text[i..j+k];
        if candidate == pattern {
            count += 1;
        }
        i +=1;
        j +=1;
    }
    println!("{}", count);
}