fn main () {
    println!("{:?}", flip('R', &vec![3, 2, 1, 2]));
    println!("{:?}", flip('L', &vec![1, 4, 5, 3, 5]));
}

fn flip(dir: char, cubes: &[u32]) -> Vec<u32> {
    let mut ret = cubes.to_vec();
    ret.sort();
    if dir == 'L' { ret.reverse(); }
    ret
}
