import { Carousel } from 'antd';

const contentStyle = {
  height: '160px',
  color: '#fff',
  lineHeight: '160px',
  textAlign: 'center',
  background: '#364d79',
};

export default function MyCarousel (
  props
)
{
  const myHorses = props.horses.map((item) => <div><h3 style={contentStyle}>{item}</h3></div>)
  return(
  <>
      <Carousel autoplay>
        { myHorses }
      </Carousel>
  </>
  );
}