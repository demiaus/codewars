fn main () {
    println!("{:?}", array_diff(vec![1,2], vec![1]));
    println!("{:?}", array_diff(vec![1,2,2], vec![1]));
    println!("{:?}", array_diff(vec![1,2,2], vec![2]));
    println!("{:?}", array_diff(vec![1,2,2], vec![]));
    println!("{:?}", array_diff(vec![], vec![1,2]));
    println!("{:?}", array_diff(vec![1,2,3], vec![1,2]));
}

fn array_diff<T: PartialEq>(a: Vec<T>, b: Vec<T>) -> Vec<T> {
    a.into_iter()
        .filter(|n| !b.contains(n))
        .collect()
}
