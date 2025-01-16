/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ['*'],
  theme: {
    extend: {
      colors:{
        anis : '#808000', //my custom color
      },
      screens:{
        mobileL : '425px',
        mobileM : '375px', //my custom screen size class
      },
    },
  },
  plugins: [],
}

